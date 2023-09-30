# Langages de programmation

On peut distinguer deux types de langages de programmation :

1. Les langages dit de "haut-niveau" qui utilisent une syntaxe proche du langage humain. Le code source y est plus intelligible et il est compilé en code executable via un compilateur ou un interpréteur. Java et Python sont deux exemples de langages de "haut-niveau".

<!-- TODO : These are usually slower than Low-level, but it comes with being easier.
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

### Scripting Languages

A scripting language is a computer language that doesn't have to be compiled. One advantage of Scripting languages is that the code can be quickly edited and can be re-executed. They can be used on the server side of web applications and the client side of web applications.

Some Scripting Languages include:

- [JavaScript](https://www.javascript.com/)
- [PHP](https://www.php.net/)- [Java](https://www.java.com/)
- [JavaScript](https://www.javascript.com/)
- [C++](https://www.cplusplus.com/)
- [C](No-Website)
- [C#](No-Website)
- [Go](https://www.go.dev/)
- [Swift](https://developer.apple.com/swift/)

### Programming Language Paradigms

Programming languages are also often classified into several different _programming paradigms_. Programming paradigms are different ways or styles in which a given program or programming language can be organized. Each paradigm consists of certain structures, features, and opinions about how common programming problems should be addressed.

Some popular programming paradigms include:

- imperative programmming
- procedural programming
- functional programming
- object oriented programming
- declarative programming

**Imperative programming**: Imperative programming consists of sets of detailed instructions that are given to the computer to execute in a given order. It's called "impeerative" because as programmers we dictate exactly what the computer has to do, in a very specific way, step by step. An example of imperative programming might look like this:

```javascript
const nums = [1, 4, 3, 6, 7, 8, 9, 2];
const result = [];

for (let i = 0; i < nums.length; i++) {
  if (nums[i] > 5) result.push(nums[i]);
}
console.log(result); // Output: [6,7,8,9]
```

We are telling the program to iterate through each element in the array, compare the item value with 5, push it into an array. We're being detailed and specific in our instructions, which is what imperative programming stands for.

**Procedural programming**: Prodecural programming is a derivation of imperative programming, adding to it the features of functions (also known as "prodecures or "subroutines"). In procedural programming, the user is encouragd to subdivide the program execution into proecudures, as a way of improving modularity and organization.

**Functional programming**: Functional programming takes the concept of functions a little bit further. Functions are treated as **first-class citizens**, meaning they can be assigned to variables, passed as arguments, and returned from other functions. Functional programming defends the idea that code modularity and the absence of side effects make it easier to identify and separate responsibilities within the codebase. This, therefore, improves code maintainability. Going back to the array filtering example, we can see that with the imperative paradigm, we might use an external variable to store the function's result, which can be considered a side effect.

```javascript
const nums = [1, 4, 3, 6, 7, 8, 9, 2];
const result = []; // External variable

for (let i = 0; i < nums.length; i++) {
  if (nums[i] > 5) result.push(nums[i]);
}
console.log(result); //Output: [ 6,7,8,9 ]
```

To transform this into a functional idiom, we could do it like this:

```javascript
const nums = [1, 2, 3, 6, 7, 8, 9, 2];

function filterNums() {
  const result = []; // Internal variable

  for (let i = 0; i < nums.length; i++) {
    if (nums[i] > 5) result.push(nums[i]);
  }
  return result;
}

console.log(filterNums()); // Output: [ 6,7,8,9 ]
```

It is almost the same code, but we wrap our iteration within a function, in which we also store the result array. In this way, we can assure the function doesn't modify anything outside its scope. It only creates a variable to process its own information, and once the execution is finished, the variable is gone too.

**Declarative Programming**: Declarative programming is all about hiding away complexity and bringing programming languages closer to human language and thinking. It's the direct opposite of imperative programming in the sense that the programmer doesn't give instructions about _how_ the computer should execute its task,, but rather _what_ result is needed.

This will be much clearer with an example. Following the same array filtering story, a declarative approach might be:

```javascript
const nums = [1, 4, 3, 6, 7, 8, 9, 2];

comsole.log(nums.filter((num) => num > 5)); //
```

See that with the filter function, we're not explicitly telling the computer to iterate over the array or store the values in a separate array. we just say what we want ("filter") and the condition to meet ("num > 5).

**Object Oriented Programming**: One of the most popular programming paradigms is object-oriented programming (OOP). The core concept of OOP is to separate concerns into entities which are coded
as objects, Each entity will group a given set of information (properties) and actions (methods) that can be performed by the entity.

OOP makes heavy use of classes, which are a way of creating new objects starting out from a blueprint or boilerplate that the programmer sets. Objects that are created from a class are called instances. -->
