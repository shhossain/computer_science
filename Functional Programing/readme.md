# Functional Programming (λ)

Functional programming is a programming paradigm in which we try to bind everything in pure mathematical functions style. It is a declarative type of programming style. Its main focus is on “what to solve” in contrast to an imperative style where the main focus is “how to solve”. It uses expressions instead of statements. An expression is evaluated to produce a value whereas a statement is executed to assign variables. Those functions have some special features discussed below. 

## Lambda Calculus

[Lambda calculus](https://en.wikipedia.org/wiki/Lambda#:~:text=Lambda%20(%2F%CB%88l%C3%A6m,has%20a%20value%20of%2030.) is a framework developed by Alonzo Church to study computations with functions. It can be called as the smallest programming language in the world. It gives the definition of what is computable. Anything that can be computed by lambda calculus is computable. It is equivalent to Turing machine in its ability to compute. It provides a theoretical framework for describing functions and their evaluation. It forms the basis of almost all current functional programming languages. 

**Fact:** Alan Turing was a student of Alonzo Church who created Turing machine which laid the foundation of imperative programming style.

* Languages that support functional programming
    1. [Haskell](https://www.haskell.org/)
    2. [Scala](https://www.scala-lang.org/)
    3. [Clojure](https://clojure.org/)
    4. [OCaml](https://ocaml.org/)
    5. [C](https://en.wikipedia.org/wiki/C_(programming_language))
    [etc.](https://en.wikipedia.org/wiki/Category:Functional_languages)


* ## Features of Functional programming

    1. Pure functions
    2. Recursion
    3. Refral transparency
    4. first class and higher order functions
    5. Immutable variables

### 1. Pure functions
These functions have two main properties. First, they always produce the same output for same arguments irrespective of anything else. 
Secondly, they have no side-effects i.e. they do not modify any arguments or local/global variables or input/output streams. 
Later property is called immutability. The pure function’s only result is the value it returns. They are deterministic. 
Programs done using functional programming are easy to debug because pure functions have no side effects or hidden I/O. Pure functions also make it easier to write parallel/concurrent applications. When the code is written in this style, a smart compiler can do many things – it can parallelize the instructions, wait to evaluate results when needing them, and memorize the results since the results never change as long as the input doesn’t change. 
    
1. If the result of a pure expression is not used, it can be removed without affecting other expressions.
2. If a pure function is called with arguments that cause no side-effects, the result is constant with respect to that argument list (sometimes called referential transparency or idempotence), i.e., calling the pure function again with the same arguments returns the same result. (This can enable caching optimizations such as memoization.)
3. If there is no data dependency between two pure expressions, their order can be reversed, or they can be performed in parallel and they cannot interfere with one another (in other terms, the evaluation of any pure expression is thread-safe).
4. If the entire language does not allow side-effects, then any evaluation strategy can be used; this gives the compiler freedom to reorder or combine the evaluation of expressions in a program (for example, using deforestation).

'''Pure Function example
    
    void sum (int a, int b) {
        int a = 10;
        int b = 20;
        int c = a + b;
        print(c);
    }

'''

### 2. Recursion
In functional programs variables once defined do not change their value throughout the program. Functional programs do not have assignment statements. If we have to store some value, we define new variables instead. This eliminates any chances of side effects because any variable can be replaced with its actual value at any point of execution. State of any variable is constant at any instant. 
'''Recursion example
        
        int sum (int n) {
            if (n == 0) {
                return 0;
            }
            return n + sum(n-1);
        }
    
'''

### 3. Refral transparency
It means that a function call can be replaced by its value without changing the meaning of the program. It is a property of pure functions.
'''Refral programming
    
    // A referentially transparent function
    int add(int a, int b) {
        return a + b;
    }

    int main() {
        int x = 3;
        int y = 4;

    // Using the add function in a referentially transparent way
    int result = add(x, y);
    
    printf("Result: %d\n", result);
    
    return 0;
'''
In this example, the add function is referentially transparent because it takes two integers as input and returns their sum. There are no side effects, and the result of calling add(x, y) is solely determined by the values of x and y.

Referential transparency is a key concept in functional programming, emphasizing immutability and pure functions, which makes code more predictable and easier to reason about. While C is not a functional programming language, you can still apply these principles when designing your functions to improve code quality and maintainability.



### 4. First class and higher order Function
In functional programming, functions are treated as first class citizens. This means that they can be assigned to a variable, passed as an argument to other functions and can be returned from other functions too.
'''First class functions in JS

    // First-order function
    function add(a, b) {
        return a + b;
    }

    const result = add(3, 4);
    console.log("Result:", result);    

'''
'''Higher order function in JS
    
        // Higher-order function
        function add(a, b) {
            return a + b;
        }
    
        function manipulate(a, b, func) {
            const c = a + b;
            const d = a - b;
    
            function multiply() {
                const m = func(a, b);
                return c * d * m;
            }
    
            return multiply;
        }
    
        const multiply = manipulate(3, 4, add);
        console.log("Result:", multiply());
    
'''

### 5. Immutable variables
In functional programming, variables are immutable. Once defined, their value cannot be changed. This is because we cannot assign a new value to a variable once it is defined. We can only define new variables. This eliminates any chances of side effects because any variable can be replaced with its actual value at any point of execution. State of any variable is constant at any instant.
'''Immutable variables in JS
    
    // Immutable variables
    const a = 3;
    const b = 4;
    const c = a + b;
    console.log("Result:", c);
    
'''
Immutable variables are sort of a rule that the programmer implement on himself or a code base to just assign value to a variables and never change the value 
This creates a problem of excessive memory usagee so in C we can use scope to clear out the variables but this is not a stict rule 
Programmer might modify this while writing compleex variable that some of the variable are allowed to change their values and just them in some from of identification in the variable names
Like using all capital names for constant variables and small case for variables that can change their values
Or create a constant variable like JS and CPP 

'''C++

    const int a = 3;
    const int b = 4;
    
'''
'''JS
    
    const a = 3;
    const b = 4;

'''

### Advantage of functional programming
    1. Easy to debug
    2. Easy to test
    3. Easy to understand
    4. Easy to maintain
    5. Easy to extend
    6. Easy to parallelize

### Disadvantage of functional programming 
    1. Memory usage
    2. Performance
    3. Readability
    4. Difficult to write
    5. Difficult to learn



### Applications of functional programming
    1. Artificial intelligence
    2. Machine learning
    3. Data science
    4. Web development
    5. Mobile development
    6. Game development
    7. Robotics
    8. Embedded systems



## Pure VS Impure Functions 

Pure functions take som input and give a fixed output. Also, they cause no side effect in the outside world.
'''JS
    
    const add = (a, b) => a + b;
    
    // Here add is a pure function. this is because, for a fixed  value of a & b, the output will always be the same 
'''

'''JS
    
    const SECRET = 42;
    const getId = () => SECRET * a;

    // Here getId is not a pure function as the output will change if the value of SECRET change here the output will not be one to one on same input 
'''
'''JS 
    
    const id_count = 0;
    const gitId = () => ++id_count;

    // This is also not a pure function


    // Output 
    getId() -------> 1 
    getId() -------> 2 
    getId() -------> 3 ? 
    // Here the output is not fixed for a fixed input
'''

## History of Functional Programming 
    
    The lambda calculus, developed in the 1930s by Alonzo Church, is the original functional programming language. It is a formal system that defines functions and function application. It is a mathematical abstraction rather than a programming language but it forms the basis of almost all functional programming languages today, In 1937 Alan Turing proved that the lambda calculus and Turing Machine  are equivalet models of computation, showing lambda calculus is Turing Complete. An equivalent theoritical formulation, combinatory logic, was developed by Mises Schonfinkel and Haskell Curry in the 1920s and 30s. 

    Church later developed a waker system, the simple-typed lambda calculus, which extends the lambdfa calculus by assigning a data types to all terms. This forms the basis for statically typed functional programming.
    
    The fisrt high-level functional programming language, LISP, was developed in the late 1950s for the IBM 700,7000 Series of Scientific computers by John McCarthy while at Masschusetts Institute of Techniligy ( MIT ). Lisp functions were defined using Churchls lambda notation, extended with a label construct to allow recursive functions. Lisp first introduced many paradigmatic features of functions. Lisp first introduced many paradigmatic features of functional programming, though early Lisps were multi-paradigm languages, and incorporated support for numerous programming styles as new paradigms evolved. Later dialects, such as Scheme and Clojure, and offshoots such as Dylan and Julia, sought to simplify and rationalise Lisp around a cleanly functional core, while Common Lisp was designed to preserve and update the paradigmatic features of the numerous older dialects it replaced. 
    In the mid-1960s, Peter Landin invented SECD machine, the first abstract machine for a functional programming language, described a correspondence between ALGOL 60 and the lambda calculus, and proposed the ISWIM programming language.

    The 1973 language ML was created by Robin Milner at the University of Edinburgh, and David Turner developed the language SASL at the University of St Andrews. Also in Edinburgh in the 1970s, Burstall and Darlington developed the functional language NPL. NPL was based on Kleene Recursion Equations and was first introduced in their work on program transformation. Burstall, MacQueen and Sannella then incorporated the polymorphic type checking from ML to produce the language Hope. ML eventually developed into several dialects, the most common of which are now OCaml and Standard ML.

    In the 1970s, Guy L. Steele and Gerald Jay Sussman developed Scheme, as described in the Lambda Papers and the 1985 textbook Structure and Interpretation of Computer Programs. Scheme was the first dialect of lisp to use lexical scoping and to require tail-call optimization, features that encourage functional programming.

    In the 1980s, Per Martin-Löf developed intuitionistic type theory (also called constructive type theory), which associated functional programs with constructive proofs expressed as dependent types. This led to new approaches to interactive theorem proving and has influenced the development of subsequent functional programming languages.

    The lazy functional language, Miranda, developed by David Turner, initially appeared in 1985 and had a strong influence on Haskell. With Miranda being proprietary, Haskell began with a consensus in 1987 to form an open standard for functional programming research; implementation releases have been ongoing as of 1990.

    More recently it has found use in niches such as parametric CAD in the OpenSCAD language built on the CGAL framework, although its restriction on reassigning values (all values are treated as constants) has led to confusion among users who are unfamiliar with functional programming as a concept.

    Functional programming continues to be used in commercial settings


## Imperative vs Functional programming
The following two examples (written in JavaScript) achieve the same effect: they multiply all even numbers in an array by 10 and add them all, storing the final sum in the variable "result".


'''Traditional Imperative Loop: JS 
    
    const numList = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
    let result = 0;
    for (let i = 0; i < numList.length; i++) {
        if (numList[i] % 2 === 0) {
            result += numList[i] * 10;
        }
    }

'''
'''Functional Programming with higher order functions: JS

    const result = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
               .filter(n => n % 2 === 0)
               .map(a => a * 10)
               .reduce((a, b) => a + b, 0);

'''


## Functional programming in non-functional languages 
It is possible to use a functional style of programming in languages that are not traditionally considered functional languages. For example, both D and Fortran 95 explicitly support pure functions.

JavaScript, Lua, Python and Go had first class functions from their inception. Python had support for "lambda", "map", "reduce", and "filter" in 1994, as well as closures in Python 2.2, though Python 3 relegated "reduce" to the functools standard library module. First-class functions have been introduced into other mainstream languages such as PHP 5.3, Visual Basic 9, C# 3.0, C++11, and Kotlin.

In PHP, anonymous classes, closures and lambdas are fully supported. Libraries and language extensions for immutable data structures are being developed to aid programming in the functional style.

In Java, anonymous classes can sometimes be used to simulate closures; however, anonymous classes are not always proper replacements to closures because they have more limited capabilities. Java 8 supports lambda expressions as a replacement for some anonymous classes.

In C#, anonymous classes are not necessary, because closures and lambdas are fully supported. Libraries and language extensions for immutable data structures are being developed to aid programming in the functional style in C#.

Many object-oriented design patterns are expressible in functional programming terms: for example, the strategy pattern simply dictates use of a higher-order function, and the visitor pattern roughly corresponds to a catamorphism, or fold.

Similarly, the idea of immutable data from functional programming is often included in imperative programming languages, for example the tuple in Python, which is an immutable array, and Object.freeze() in JavaScript.

### Simulating states 
There are tasks (for example, maintaining a bank account balance) that often seem most naturally implemented with state. Pure functional programming performs these tasks, and I/O tasks such as accepting user input and printing to the screen, in a different way.

The pure functional programming language Haskell implements them using monads, derived from category theory. Monads offer a way to abstract certain types of computational patterns, including (but not limited to) modeling of computations with mutable state (and other side effects such as I/O) in an imperative manner without losing purity. While existing monads may be easy to apply in a program, given appropriate templates and examples, many students find them difficult to understand conceptually, e.g., when asked to define new monads (which is sometimes needed for certain types of libraries).

Functional languages also simulate states by passing around immutable states. This can be done by making a function accept the state as one of its parameters, and return a new state together with the result, leaving the old state unchanged.

Impure functional languages usually include a more direct method of managing mutable state. Clojure, for example, uses managed references that can be updated by applying pure functions to the current state. This kind of approach enables mutability while still promoting the use of pure functions as the preferred way to express computations.

Alternative methods such as Hoare logic and uniqueness have been developed to track side effects in programs. Some modern research languages use effect systems to make the presence of side effects explicit.

### Type Systems 
Especially since the development of Hindley–Milner type inference in the 1970s, functional programming languages have tended to use typed lambda calculus, rejecting all invalid programs at compilation time and risking false positive errors, as opposed to the untyped lambda calculus, that accepts all valid programs at compilation time and risks false negative errors, used in Lisp and its variants (such as Scheme), as they reject all invalid programs at runtime when the information is enough to not reject valid programs. The use of algebraic datatypes makes manipulation of complex data structures convenient; the presence of strong compile-time type checking makes programs more reliable in absence of other reliability techniques like test-driven development, while type inference frees the programmer from the need to manually declare types to the compiler in most cases.

Some research-oriented functional languages such as Coq, Agda, Cayenne, and Epigram are based on intuitionistic type theory, which lets types depend on terms. Such types are called dependent types. These type systems do not have decidable type inference and are difficult to understand and program with. But dependent types can express arbitrary propositions in higher-order logic. Through the Curry–Howard isomorphism, then, well-typed programs in these languages become a means of writing formal mathematical proofs from which a compiler can generate certified code. While these languages are mainly of interest in academic research (including in formalized mathematics), they have begun to be used in engineering as well. Compcert is a compiler for a subset of the C programming language that is written in Coq and formally verified.

A limited form of dependent types called generalized algebraic data types (GADT's) can be implemented in a way that provides some of the benefits of dependently typed programming while avoiding most of its inconvenience. GADT's are available in the Glasgow Haskell Compiler, in OCaml and in Scala, and have been proposed as additions to other languages including Java and C#.

### Strict VS Non strict Evaluation 
Functional languages can be categorized by whether they use strict (eager) or non-strict (lazy) evaluation, concepts that refer to how function arguments are processed when an expression is being evaluated. The technical difference is in the denotational semantics of expressions containing failing or divergent computations. Under strict evaluation, the evaluation of any term containing a failing subterm fails. For example, the expression: 
'''Python
    
    print length ([2+1, 3*2, 1/0, 5-4])
'''
fails under strict evaluation because of the division by zero in the third element of the list. Under lazy evaluation, the length function returns the value 4 (i.e., the number of items in the list), since evaluating it does not attempt to evaluate the terms making up the list. In brief, strict evaluation always fully evaluates function arguments before invoking the function. Lazy evaluation does not evaluate function arguments unless their values are required to evaluate the function call itself.

The usual implementation strategy for lazy evaluation in functional languages is graph reduction. Lazy evaluation is used by default in several pure functional languages, including Miranda, Clean, and Haskell.

Hughes 1984 argues for lazy evaluation as a mechanism for improving program modularity through separation of concerns, by easing independent implementation of producers and consumers of data streams. Launchbury 1993 describes some difficulties that lazy evaluation introduces, particularly in analyzing a program's storage requirements, and proposes an operational semantics to aid in such analysis. Harper 2009 proposes including both strict and lazy evaluation in the same language, using the language's type system to distinguish them.


### Efficiency issues 
Functional programming languages are typically less efficient in their use of CPU and memory than imperative languages such as C and Pascal. This is related to the fact that some mutable data structures like arrays have a very straightforward implementation using present hardware. Flat arrays may be accessed very efficiently with deeply pipelined CPUs, prefetched efficiently through caches (with no complex pointer chasing), or handled with SIMD instructions. It is also not easy to create their equally efficient general-purpose immutable counterparts. For purely functional languages, the worst-case slowdown is logarithmic in the number of memory cells used, because mutable memory can be represented by a purely functional data structure with logarithmic access time (such as a balanced tree).However, such slowdowns are not universal. For programs that perform intensive numerical computations, functional languages such as OCaml and Clean are only slightly slower than C according to The Computer Language Benchmarks Game. For programs that handle large matrices and multidimensional databases, array functional languages (such as J and K) were designed with speed optimizations.

Immutability of data can in many cases lead to execution efficiency by allowing the compiler to make assumptions that are unsafe in an imperative language, thus increasing opportunities for inline expansion.

Lazy evaluation may also speed up the program, even asymptotically, whereas it may slow it down at most by a constant factor (however, it may introduce memory leaks if used improperly). Launchbury 1993 discusses theoretical issues related to memory leaks from lazy evaluation, and O'Sullivan et al. 2008 give some practical advice for analyzing and fixing them. However, the most general implementations of lazy evaluation making extensive use of dereferenced code and data perform poorly on modern processors with deep pipelines and multi-level caches (where a cache miss may cost hundreds of cycles).

<------------------------------------------------------------------------------------------>

Author: Sarthak sharma
date: 9 Oct, 2021

Github: Sarthak950
Website https://www.sarthak950.netlify.app/

<------------------------------------------------------------------------------------------>
