# test code in readme files

import subprocess
import termcolor
import uuid
import os
import sys
import threading
import shutil
import re
import hashlib


# this file is in .github\test_code.py
# chdir to root of repo
os.chdir(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))

EXTENTIONS = {
    "py": "python",
    "cpp": "c++",
    "c": "c",
    "java": "java",
    "js": "javascript",
    "ts": "typescript",
    "go": "go",
    "php": "php",
    "rb": "ruby",
    "sh": "bash",
}

SUPPORTED_LANGUAGE = {
    "python": {
        "extension": ".py",
        "alias": ["py", "python"],
        "win_cmd": "python {file_name}",
        "linux_cmd": "python3 {file_name}",
    },
    "c++": {
        "extension": ".cpp",
        "alias": ["cpp", "cxx", "cc", "c++"],
        "win_cmd": "g++ {file_name} -o {file_name_without_extension} -std=c++17 && {file_name_without_extension}",
        "linux_cmd": "g++ {file_name} -o {file_name_without_extension} -std=c++17 && ./{file_name_without_extension}",
    },
    "c": {
        "extension": ".c",
        "alias": ["c"],
        "win_cmd": "gcc {file_name} -o {file_name_without_extension} && {file_name_without_extension}",
        "linux_cmd": "gcc {file_name} -o {file_name_without_extension} && ./{file_name_without_extension}",
    },
    "java": {
        "extension": ".java",
        "alias": ["java"],
        "win_cmd": "javac {file_name} && java {file_name_without_extension}",
        "linux_cmd": "javac {file_name} && java {file_name_without_extension}",
    },
    "javascript": {
        "extension": ".js",
        "alias": ["js", "javascript"],
        "win_cmd": "node {file_name}",
        "linux_cmd": "node {file_name}",
    },
    "typescript": {
        "extension": ".ts",
        "alias": ["ts", "typescript"],
        "win_cmd": "tsc {file_name} && node {file_name_without_extension}",
        "linux_cmd": "tsc {file_name} && node {file_name_without_extension}",
    },
    "go": {
        "extension": ".go",
        "alias": ["go"],
        "win_cmd": "go run {file_name}",
        "linux_cmd": "go run {file_name}",
    },
    "php": {
        "extension": ".php",
        "alias": ["php"],
        "win_cmd": "php {file_name}",
        "linux_cmd": "php {file_name}",
    },
    "ruby": {
        "extension": ".rb",
        "alias": ["rb", "ruby"],
        "win_cmd": "ruby {file_name}",
        "linux_cmd": "ruby {file_name}",
    },
    "bash": {
        "extension": ".sh",
        "alias": ["sh", "bash"],
        "win_cmd": "echo 'bash not supported on windows' {file_name}",
        "linux_cmd": "echo {file_name}",
    }

}


def get_random_file_name(extension):
    rs = str(uuid.uuid4()).split("-")[0]
    return rs + extension


def java_file_name(code):
    return re.search(r'class\s+(\w+)', code).group(1) + ".java" # type: ignore


errors = []
error_level = [0]


class Log:
    def __init__(self, color):
        self.color = color

    def __call__(self, msg):
        print(termcolor.colored(msg, self.color))

    @staticmethod
    def info(*msg, **kwargs):
        s = " ".join([str(x) for x in msg])
        print(termcolor.colored(s, 'blue'), **kwargs)

    @staticmethod
    def debug(*msg, **kwargs):
        s = " ".join([str(x) for x in msg])
        print(termcolor.colored(s, 'green'), **kwargs)

    @staticmethod
    def error(*msg, **kwargs):
        s = " ".join([str(x) for x in msg])
        if not "threaded" in kwargs:
            level = kwargs["level"] if "level" in kwargs else 0
            errors.append((level, s))
            error_level[0] = max(error_level[0], level)
        else:
            kwargs.pop("threaded", None)
            print(termcolor.colored(s, 'red'), **kwargs)

    @staticmethod
    def warn(*msg, **kwargs):
        s = " ".join([str(x) for x in msg])
        print(termcolor.colored(s, 'yellow'), **kwargs)

    @staticmethod
    def error_occured():
        return error_level[0] > 0


class LANGUAGE_NOT_SUPPORTED(Exception):
    error_level: int = 1


class CODE_EXECUTION_ERROR(Exception):
    error_level: int = 5


class Code:
    def __init__(self, code, language, file_path=None) -> None:
        self.code = code
        Log.debug("Language: " + language)
        self.file_path = file_path
        self.language = self.get_language(language)
        self.extension = SUPPORTED_LANGUAGE[self.language]['extension']
        self.analyze_code()
        self.command = self.get_command()

    def analyze_code(self) -> None:
        if self.language == "javascript":
            ch_table = {"<script>": "", "</script>": "",
                        "document.write": "console.log", "document.writeln": "console.log"}
            for k, v in ch_table.items():
                self.code = self.code.replace(k, v)

        elif self.language == "c++":
            # change all header to <bits/stdc++.h>
            self.code = re.sub(r'#include\s+<\w+>',
                               '#include <bits/stdc++.h>', self.code)
            if not self.code.startswith('#include <bits/stdc++.h>'):
                self.code = '#include <bits/stdc++.h>\n' + self.code

    def get_command(self):
        if sys.platform == 'win32':
            return SUPPORTED_LANGUAGE[self.language]['win_cmd']
        else:
            return SUPPORTED_LANGUAGE[self.language]['linux_cmd']

    def get_language(self, language):
        language = language.lower().strip()
        if language in SUPPORTED_LANGUAGE:
            return language
        for lang in SUPPORTED_LANGUAGE:
            if language in SUPPORTED_LANGUAGE[lang]['alias']:
                return lang
        raise LANGUAGE_NOT_SUPPORTED(
            f"{self.file_path} | Language {language} is not supported")

    def run(self):
        if self.language == "java":
            file_name = java_file_name(self.code)
        else:
            file_name = get_random_file_name(self.extension)

        if self.language == "c#":
            return self.run_dotnet(file_name)

        with open(file_name, 'w') as f:
            f.write(self.code)

        Log.info("Running code")
        Log.debug(f"File name: {file_name}")
        cmd = self.command.format(
            file_name=file_name, file_name_without_extension=file_name.split('.')[0])
        Log.debug(f"Command: {cmd}")
        process = subprocess.Popen(
            cmd, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        stdout, stderr = process.communicate()
        self.clean_up(file_name)

        if stderr:
            raise CODE_EXECUTION_ERROR(stderr.decode())
        return stdout.decode()

    def run_dotnet(self, file_name):
        Log.info("Running code")
        Log.debug(f"File name: {file_name}")
        # create dotnet project
        cmd = "dotnet new console -o {file_name_without_extension}".format(
            file_name_without_extension=file_name.split('.')[0])
        Log.debug(f"Command: {cmd}")
        process = subprocess.Popen(
            cmd, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        stdout, stderr = process.communicate()
        if stderr:
            raise CODE_EXECUTION_ERROR(stderr.decode())

        project_path = os.path.join(
            os.getcwd(), file_name.split('.')[0], file_name)
        Log.debug(f"Project path: {project_path}")
        with open(project_path, 'w') as f:
            f.write(self.code)

        # run dotnet project
        cmd = "dotnet run --project {file_name_without_extension}".format(
            file_name_without_extension=file_name.split('.')[0])
        Log.debug(f"Command: {cmd}")
        process = subprocess.Popen(
            cmd, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        stdout, stderr = process.communicate()
        self.clean_up(file_name.split('.')[0])
        if stderr:
            raise CODE_EXECUTION_ERROR(stderr.decode())
        return stdout.decode()

    def clean_up(self, file_name):
        # remove file that starts with the same name
        for file in os.listdir():
            if file.startswith(file_name.split('.')[0]):
                shutil.rmtree(file) if os.path.isdir(file) else os.remove(file)


def fix_path(path):
    # if linux and starts with / remove it
    if sys.platform != 'win32' and path.startswith('/'):
        path = path[1:]
    return path


class Test:
    def __init__(self, path) -> None:
        self.readme_path = fix_path(path)
        self.codes = self.get_codes() if path.endswith('.md') else self.get_code(path)
        Log.debug("Testing code in ", path)

    def get_codes(self):
        codes = {}  # key: language, value: [(code,line_number)]
        with open(self.readme_path) as f:
            for n, line in enumerate(f):
                if line.startswith('```'):
                    language = line.split('```')[1].strip()
                    if not language:
                        continue
                    code = ''
                    for line in f:
                        if line.startswith('```'):
                            break
                        code += line
                    if language not in codes:
                        codes[language] = []
                    codes[language].append((code, n+1))

        Log.debug(f"{self.readme_path} | Codes: {len(codes)}")
        return codes
    
    def get_code(self, path):
        with open(path, 'r', encoding='utf-8') as f:
            code = f.read()
        
        ex = path.split('.')[-1]
        lang = ex
        if ex in EXTENTIONS:
            lang = EXTENTIONS[ex]
        
        return {
            lang: [(code, 1)]
        }
        
        

    def threaded_test(self):
        threads = []
        for language in self.codes:
            for code, line_number in self.codes[language]:
                Log.info(f"{self.readme_path} | Testing {language} code in line {line_number}")
                t = threading.Thread(target=self.test_code, args=(
                    code, language, line_number))
                threads.append(t)
                t.start()

        for t in threads:
            t.join()

    def normal_test(self):
        for language in self.codes:
            for code, line_number in self.codes[language]:
                Log.info(
                    f"{self.readme_path} | Testing {language} code in line {line_number}")
                self.test_code(code, language, line_number)

    def test_code(self, code, language, line_number):
        error = False
        try:
            output = Code(code, language).run()
            Log.debug(
                f"{self.readme_path} => \n==<START>==OUTPUT==={language}=\n{output}\n={line_number}===OUTPUT==<END>==")
        except LANGUAGE_NOT_SUPPORTED as e:
            Log.error(e,level=LANGUAGE_NOT_SUPPORTED.error_level)
            error = True
        except CODE_EXECUTION_ERROR as e:
            Log.error(
                f"{self.readme_path} | {language} code execution error in ", line_number, level=CODE_EXECUTION_ERROR.error_level)
            Log.error(e,level=CODE_EXECUTION_ERROR.error_level)
            error = True
        if not error:
            Log.info(
                f"{self.readme_path} | {language} code in line {line_number} executed successfully")

    def test(self):
        self.threaded_test()
        # self.normal_test()





def test_all(files: list):
    Log.info(f"Testing {len(files)} files")
    threads = []
    for file in files:
        t = threading.Thread(target=Test(file).test)
        threads.append(t)
        t.start()

    for t in threads:
        t.join()

    max_error_level = error_level[0]
    if max_error_level >= 5:
        Log.error("There are errors in the code",threaded=False)
        for error in errors:
            Log.error(error,threaded=False)
        sys.exit(1)
    elif max_error_level > 0:
        Log.error("There are warnings in the code", threaded=False)
        for error in errors:
            Log.warn(error)
    else:
        Log.info("No errors found")


# compare files with hash

# class CompareGitRepo:
#     def __init__(self, local_repo_path, remote_repo_url) -> None:
#         self.local_repo_path = local_repo_path
#         self.remote_repo_url = remote_repo_url
#         self.repo_name = remote_repo_url.split('/')[-1]
#         self.local_files_hash = {}
#         self.remote_files_hash = {}
#         self.ignore_files = [".gitignore", ".git", ".github", "temp"]
#         self.clone_repo()

#     def clone_repo(self):
#         if not os.path.exists("temp"):
#             Log.info("Cloning remote repo")
#             os.mkdir("temp")
#             os.chdir("temp")
#             os.system(f"git clone {self.remote_repo_url}")
#             os.chdir("..")
    
#     def get_files(self, path):
#         files = []
#         for root, dirs, file in os.walk(path):
#             dirs[:] = [d for d in dirs if d not in self.ignore_files]
#             for f in file:
#                 files.append(os.path.join(root, f))
#         return files

#     def get_local_files(self) -> list:
#         return self.get_files(self.local_repo_path)

#     def get_remote_files(self) -> list:
#         return self.get_files("temp")

#     def compare(self):
#         local_files = self.get_local_files()
#         remote_files = self.get_remote_files()

#         threads = []
#         for file in local_files:
#             t = threading.Thread(target=self.get_hash, args=(file, "local"))
#             t.start()
#             threads.append(t)

#         for file in remote_files:
#             t = threading.Thread(target=self.get_hash, args=(file, "remote"))
#             t.start()
#             threads.append(t)

#         for t in threads:
#             t.join()

#         modified_files = []
#         new_files = []

#         # get common files using set intersection
#         common_files = set(self.local_files_hash.keys()).intersection(
#             set(self.remote_files_hash.keys()))

#         # get modified files
#         for file in common_files:
#             if self.local_files_hash[file] != self.remote_files_hash[file]:
#                 modified_files.append(file)

#         # get new files that are in local but not in remote
#         for file in self.local_files_hash.keys():
#             if not file in common_files:
#                 new_files.append(file)

#         Log.info("Files modified")
#         for mf in modified_files:
#             Log.warn("Modified file ", mf)

#         for nf in new_files:
#             Log.warn("New file      ", nf)

#         return modified_files + new_files

#     def get_file_name(self, name):
#         return name.split(self.repo_name)[-1]

#     def get_hash(self, file, repo):
#         with open(file, "rb") as f:
#             file_hash = hashlib.sha256(f.read()).hexdigest()
#             if repo == "local":
#                 f = self.get_file_name(file)
#                 self.local_files_hash[f] = file_hash
#             else:
#                 f = self.get_file_name(file)
#                 self.remote_files_hash[f] = file_hash


if __name__ == "__main__":
    curent_dir = os.getcwd()
    cmd = "git diff --name-only HEAD HEAD~1"
    process = subprocess.Popen(
        cmd, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    stdout, stderr = process.communicate()
    modified_files = stdout.decode().split('\n')
    print("Modified files:")
    for i in range(len(modified_files)):
        modified_files[i] = modified_files[i].strip()
        print(modified_files[i])
    modified_files = [os.path.join(curent_dir, x) for x in modified_files]
    test_all(modified_files)
