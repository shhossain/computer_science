# Programming Languages

>A programming language is a formal language comprising a set of instructions that produce various kinds of output. Programming languages are used in computer programming to implement algorithms.

Programming languages are mainly of two types as mentioned before: 
1. High-level language uses a syntax similar to the English language. The source code is converted into machine-understandable machine code using a compiler or an interpreter. Java and Python are some examples of high-level programming languages. These are usually slower than Low-level, but it comes with being easier.
2. Low-level programming languages work more closely with the hardware and have more control over it. They directly interact with the hardware. Two common examples of low-level languages are machine language and assembly language. These are usually faster than High-level, but it comes at the cost of very great difficulty.

Some Languages Include:
- [Python](https://www.python.org)
- [Java](https://www.java.com/)
- [JavaScript](https://www.javascript.com/)
- [C++](https://www.cplusplus.com/)
- [C](No-Website)
- [C#](No-Website)
- [Go](https://www.go.dev/)
- [Swift](https://developer.apple.com/swift/)
- [Assembly](https://en.wikipedia.org/wiki/X86_assembly_language)

### Scripting Languages
A scripting language is a computer language that doesn't have to be compiled. One advantage of Scripting languages is that the code can be quickly edited and can be re-executed. They can be used on the server side of web applications and the client side of web applications.

Some Scripting Languages include:
- [JavaScript](https://www.javascript.com/)
- [Python](https://www.python.org)
- [Node.js](https://nodejs.org/en/)
- [Bash](https://www.gnu.org/software/bash/)
- [Ruby](https://www.ruby-lang.org/en/)
- [Perl](https://www.perl.org/)


### Compiled Languages
A compiled language is a programming language whose implementations are typically compilers (translators that generate machine code from source code), and not interpreters (step-by-step executors of source code, where no pre-runtime translation takes place). The term is somewhat vague. In principle, any language can be implemented with a compiler or with an interpreter.

Some Compiled Languages include:
- [C](https://en.wikipedia.org/wiki/C_(programming_language))
- [C++](https://www.cplusplus.com/)
- [C#](https://learn.microsoft.com/en-us/dotnet/csharp/)
- [Rust](https://www.rust-lang.org/)
- [Go](https://www.go.dev/)

### Interpreted Languages
An interpreted language is a type of programming language for which most of its implementations execute instructions directly and freely, without previously compiling a program into machine-language instructions. The interpreter executes the program directly, translating each statement into a sequence of one or more subroutines, and then into another language (often machine code).

Some Interpreted Languages include:
- [Python](https://www.python.org)
- [JavaScript](https://www.javascript.com/)
- [Ruby](https://www.ruby-lang.org/en/)
- [PHP](https://www.php.net/)
- [Perl](https://www.perl.org/)
- [Lua](https://www.lua.org/)
- [R](https://www.r-project.org/)

### Programming Language Paradigms

Programming languages are also often classified into several different *programming paradigms*. Programming paradigms are different ways or styles in which a given program or programming language can be organized. Each paradigm consists of certain structures, features, and opinions about how common programming problems should be addressed. 

Some popular programming paradigms include:
- imperative programmming
- procedural programming
- functional programming
- object oriented programming
- declarative programming

**Imperative programming**: Imperative programming consists of sets of detailed instructions that are given to the computer to execute in a given order. It's called "impeerative" because as programmers we dictate exactly what the computer has to do, in a very specific way, step by step. An example of imperative programming might look like this:

```javascript
const nums = [1,4,3,6,7,8,9,2]
const result = []

for (let i=0; i < nums.length;i++) {
    if (nums[i] > 5) result.push(nums[i])
}
console.log(result)  // Output: [6,7,8,9]

```
We are telling the program to iterate through each element in the array, compare the item value with 5, push it into an array. We're being detailed and specific in our instructions, which is what imperative programming stands for.

**Procedural programming**: Prodecural programming is a derivation of imperative programming, adding to it the features of functions (also known as "prodecures or "subroutines"). In procedural programming, the user is encouragd to subdivide the program execution into proecudures, as a way of improving modularity and organization.

```javascript
const nums = [1,4,3,6,7,8,9,2]

function filterNums() {
    const result = []

    for (let i=0;i < nums.length;i++) {
        if(nums[i] > 5) result.push(nums[i])
    }
    return result
}
```

In this example, we've created a function that takes care of the array filtering. This way, we can reuse the function in other parts of our code, and we can also make sure that the function doesn't modify anything outside its scope.

**Functional programming**: Functional programming takes the concept of functions a little bit further. Functions are treated as **first-class citizens**, meaning they can be assigned to variables, passed as arguments, and returned from other functions. Functional programming defends the idea that code modularity and the absence of side effects make it easier to identify and separate responsibilities within the codebase. This, therefore, improves code maintainability. Going back to the array filtering example, we can see that with the imperative paradigm, we might use an external variable to store the function's result, which can be considered a side effect.

```javascript
const nums = [1,4,3,6,7,8,9,2]
const result = []   // External variable

for (let i=0;i < nums.length; i++) {
    if( nums[i] > 5) result.push(nums[i])
}
console.log(result) //Output: [ 6,7,8,9 ]
```

To transform this into a functional idiom, we could do it like this:

```javascript
const nums = [1,2,3,6,7,8,9,2]

function filterNums() {
    const result = []    // Internal variable

    for (let i=0;i < nums.length;i++) {
        if(nums[i] > 5) result.push(nums[i])
    }
    return result
}

console.log(filterNums())  // Output: [ 6,7,8,9 ]
```

It is almost the same code, but we wrap our iteration within a function, in which we also store the result array. In this way, we can assure the function doesn't modify anything outside its scope. It only creates a variable to process its own information, and once the execution is finished, the variable is gone too.

**Declarative Programming**:  Declarative programming is all about hiding away complexity and bringing programming languages closer to human language and thinking. It's the direct opposite of imperative programming in the sense that the programmer doesn't give instructions about *how* the computer should execute its task,, but rather *what* result is needed.

This will be much clearer with an example. Following the same array filtering story, a declarative approach might be:

```javascript
const nums = [1,4,3,6,7,8,9,2]

comsole.log(nums.filter(num => num > 5))  // 
```
See that with the filter function, we're not explicitly telling the computer to iterate over the array or store the values in a separate array. we just say what we want ("filter") and the condition to meet ("num > 5).

**Object Oriented Programming**: One of the most popular programming paradigms is object-oriented programming (OOP). The core concept of OOP is to separate concerns into entities which are coded
as objects, Each entity will group a given set of information (properties) and actions (methods) that can be performed by the entity. 

OOP makes heavy use of classes, which are a way of creating new objects starting out from a blueprint or boilerplate that the programmer sets. Objects that are created from a class are called instances.


**Markup Languages**
Markup languages are a way of annotating a document in a way that is syntactically distinguishable from the text. The idea is to add extra information to the text, such as formatting information, metadata, or instructions for the application that will read the document. Markup languages are often used to format documentation, such as HTML, which is used to format web pages.

Some Markup Languages include:
- [HTML](https://developer.mozilla.org/en-US/docs/Web/HTML)
- [XML](https://www.w3.org/XML/)
- [LaTeX](https://www.latex-project.org/)
- [Markdown](https://www.markdownguide.org/)
- [YAML](https://yaml.org/)
- [JSON](https://www.json.org/json-en.html)

**Styling languages**
Styling languages are used to add style to markup languages. They are used to add colors, fonts, and other visual styles to web pages and documents.

Some Styling Languages include:
- [CSS](https://developer.mozilla.org/en-US/docs/Web/CSS)
- [SASS](https://sass-lang.com/)
- [SCSS](https://sass-lang.com/)
- [LESS](http://lesscss.org/)
- [Stylus](https://stylus-lang.com/)



### Genration of Programming Languages
Programming languages are often classified by generation. The generation of a programming language is a term used to refer to the stage of development of a programming language. There are five generations of programming languages:

1. **First generation**: Machine language is the only language that the computer understands. It is a language made up of entirely 0s and 1s. It is the only language that the computer understands, and it is tedious to write and understand. It is also known as the machine language. It is the only language that the computer understands, and it is tedious to write and understand. It is also known as the machine language. It is the only language that the computer understands, and it is tedious to write and understand. It is also known as the machine language. It is the only language that the computer understands, and it is tedious to write and understand. It is also known as the machine language. It is the only language that the computer understands, and it is tedious to write and understand. It is also known as the machine language. It is the only language that the computer understands, and it is tedious to write and understand. It is also known as the machine language. It is the only language that the computer understands, and it is tedious to write and understand. It is also known as the machine language. It is the only language that the computer understands, and it is tedious to write and understand. It is also known as the machine language.
```Hello World is Machine Language
    b8    21 0a 00 00   #moving "!\n" into eax
    a3    0c 10 00 06   #moving eax into first memory location
    b8    6f 72 6c 64   #moving "orld" into eax
    a3    08 10 00 06   #moving eax into next memory location
    b8    6f 2c 20 57   #moving "o, W" into eax
    a3    04 10 00 06   #moving eax into next memory location
    b8    48 65 6c 6c   #moving "Hell" into eax
    a3    00 10 00 06   #moving eax into next memory location
    b9    00 10 00 06   #moving pointer to start of memory location into ecx
    ba    10 00 00 00   #moving string size into edx
    bb    01 00 00 00   #moving "stdout" number to ebx
    b8    04 00 00 00   #moving "print out" syscall number to eax
    cd    80            #calling the linux kernel to execute our print to stdout
    b8    01 00 00 00   #moving "sys_exit" call number to eax
    cd    80            #executing it via linux sys_call
```
2. **Second generation**: Assembly language is the second generation of programming. It is a language that is easier to understand than machine language. It consists of a set of instructions that are converted into machine language by an assembler.
```Hello World is Assambly Language
    .data
    msg db 'Hello World!', 0xa
    len equ $ - msg
    .text
    global _start
    _start:
    mov eax, 4
    mov ebx, 1
    mov ecx, msg
    mov edx, len
    int 0x80
    mov eax, 1
    mov ebx, 0
    int 0x80
```
3. **Third generation**: High-level languages are the third generation of programming languages. They are easier to understand, easier to write, and easier to maintain. They are also portable, which means that they can be run on different types of computers. Examples of high-level languages include C, C++, Java, and Python.
```Hello World is High Level Language C
    #include <stdio.h>
    int main() {
        printf("Hello, World!");
        return 0;
    }
```
4. **Fourth generation**: Fourth-generation languages are programming languages that are designed to be used by non-programmers. They are often used to create database queries and reports. Examples of fourth-generation languages include SQL, SAS, and SPSS.
```Hello World is Fourth Generation Language SQL
    SELECT 'Hello, World!';
```
5. **Fifth generation**: Fifth-generation languages are programming languages that are designed to be used by non-programmers. These are the programming languages that have visual tools to develop a program. Examples of fifth-generation languages include Mercury, OPS5, and Prolog. 
```Hello world in Prolog
    :- initialization(main).
    main :- write('Hello, World!'), nl, halt.
```
