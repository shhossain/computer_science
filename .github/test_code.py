# test code in readme files

import subprocess
import termcolor
import uuid
import os
import sys
import threading
import shutil


# this file is in .github\test_code.py
# chdir to root of repo
os.chdir(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))

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
        "win_cmd": "g++ {file_name} -o {file_name_without_extension} && {file_name_without_extension}",
        "linux_cmd": "g++ {file_name} -o {file_name_without_extension} && ./{file_name_without_extension}",
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
    "c#": {
        "extension": ".cs",
        "alias": ["cs", "c#"],
        "win_cmd": "dotnet new console -o {file_name_without_extension} && move {file_name} {file_name_without_extension} && dotnet run --project{file_name_without_extension}",
        "linux_cmd": "dotnet new console -o {file_name_without_extension} && mv {file_name} {file_name_without_extension} && dotnet run --project{file_name_without_extension}",
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
    },
}


def get_random_file_name(extension):
    rs = str(uuid.uuid4()).split("-")[0]
    return rs + extension


ERRORS = []


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
            ERRORS.append(s)
        else:
            kwargs.pop("threaded", None)
            print(termcolor.colored(s, 'red'), **kwargs)

    @staticmethod
    def warn(*msg, **kwargs):
        s = " ".join([str(x) for x in msg])
        print(termcolor.colored(s, 'yellow'), **kwargs)

    @staticmethod
    def error_occured():
        return len(ERRORS) > 0


class LANGUAGE_NOT_SUPPORTED(Exception):
    pass


class CODE_EXECUTION_ERROR(Exception):
    pass


class Code:
    def __init__(self, code, language) -> None:
        self.code = code
        Log.debug("Language: " + language)
        self.language = self.get_language(language)
        self.extension = SUPPORTED_LANGUAGE[self.language]['extension']
        self.command = self.get_command()

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
        raise LANGUAGE_NOT_SUPPORTED(f"Language {language} is not supported")

    def run(self):
        file_name = get_random_file_name(self.extension)
        if self.extension == ".cs":
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


class Test:
    def __init__(self, readme_path) -> None:
        self.readme_path = readme_path
        self.codes = self.get_codes()
        Log.debug("Testing code in ", readme_path)

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

        Log.debug(f"Codes: {len(codes)}")
        return codes

    # def test(self):
    #     for language in self.codes:
    #         for code, line_number in self.codes[language]:
    #             Log.info(f"Testing code in line {line_number}")
    #             try:
    #                 Code(code, language).run()
    #             except LANGUAGE_NOT_SUPPORTED as e:
    #                 raise e
    #             except CODE_EXECUTION_ERROR as e:
    #                 Log.error("Code execution error in file " +
    #                           self.readme_path + " line " + str(line_number))
    #                 raise e
    #             Log.info("Code executed successfully")

    def threaded_test(self):
        threads = []
        for language in self.codes:
            for code, line_number in self.codes[language]:
                Log.info(f"Testing code in line {line_number}")
                t = threading.Thread(target=self.test_code, args=(
                    code, language, line_number))
                threads.append(t)
                t.start()

        for t in threads:
            t.join()

    def normal_test(self):
        for language in self.codes:
            for code, line_number in self.codes[language]:
                Log.info(f"Testing code in line {line_number}")
                self.test_code(code, language, line_number)

    def test_code(self, code, language, line_number):
        error = False
        try:
            output = Code(code, language).run()
            Log.debug(f"{language} : {line_number} => ", output)
        except LANGUAGE_NOT_SUPPORTED as e:
            Log.error(e)
            error = True
        except CODE_EXECUTION_ERROR as e:
            Log.error(f"{language} code execution error in " +
                      self.readme_path + " line " + str(line_number))
            Log.error(e)
            error = True
        if not error:
            Log.info(
                f"{language} code in line {line_number} executed successfully")

    def test(self):
        self.threaded_test()
        # self.normal_test()


# if __name__ == "__main__":
#     if len(sys.argv) < 2:
#         Log.error("No file path given")
#         sys.exit(1)

#     readme_path = sys.argv[1]
#     if not os.path.exists(readme_path):
#         Log.error("File path does not exist")
#         sys.exit(1)

#     try:
#         Test(readme_path).test()
#     except LANGUAGE_NOT_SUPPORTED as e:
#         Log.error(e)
#         sys.exit(1)


def test_all():
    files = []
    for root, dirs, file in os.walk('.'):
        for f in file:
            if f.endswith('.md'):
                files.append(os.path.join(root, f))

    Log.info(f"Testing {len(files)} files")
    threads = []
    for file in files:
        t = threading.Thread(target=Test(file).test)
        threads.append(t)
        t.start()

    for t in threads:
        t.join()

    if not Log.error_occured():
        Log.info("All code executed successfully")
    else:
        Log.error("Some error occured while executing code")
        for error in ERRORS:
            Log.error(error, threaded=False)
        sys.exit(1)


if __name__ == "__main__":
    test_all()
