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


## Features of Functional programming

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



<------------------------------------------------------------------------------------------>

Author: Sarthak sharma
date: 9 Oct, 2021

Github: Sarthak950
Website https://www.sarthak950.netlify.app/

<------------------------------------------------------------------------------------------>
