# Object-Oriented Programming (OOP)

Object-Oriented Programming is a fundamental programming paradigm that is based on the concepts of objects and data. It is the standard way of writing code that every programmer must adhere to for better readability and reusability of the code.

Object-oriented programming (OOP) is a style of programming characterized by the identification of classes of objects closely linked with the methods (functions) with which they are associated. It also includes ideas of inheritance of attributes and methods.

Object-oriented programming is a programming paradigm based on the concept of "objects," which can contain data and code: data in the form of fields and code in the form of procedures. A common feature of objects is that procedures are attached to them and can access and modify the object's data fields.

## Objects

An object can contain two types of data:

1. Attributes.
2. Procedures.

**Let's take an example:**

Consider a person to be an object.

- Their attributes, such as height, weight, age, gender, etc., provide information about that specific person.
- The person can walk, run, jump, write, sing, and perform many other actions, and these are called procedures of the object Person.

## Classes

A class can be defined as the blueprint of an object. It essentially provides the basic scaffolding or structure to create (instantiate) an object. It does not store any data like the objects but tells us what the object of that class does.

## Concepts of OOP

There are four basic concepts in Object-Oriented Programming:

1. Abstraction

   - Abstraction refers to providing only necessary details for running a method to the user without providing any sensitive background information.
   - For example, when you are driving a car, you only need to know how to drive it, use the accelerator and brake. You do not care about the mechanism of how the car is running. This is how abstraction works.

2. Encapsulation

   - Encapsulation is a process of wrapping the data and the code that operate on the data into a single entity.
   - It can be referred to as a protective wrapper that stops random access of code defined outside that wrapper to prevent the data from being mishandled and misused.
   - For example, if everyone is allowed to access the internal parts of the car, anyone who is inexperienced may mishandle the parts and cause an accident.

**Java program to Demonstrate Encapsulation**

```java
// Achieve Encapsulation

public class EncapTest {
    private String name;
    private String id;
    private int age;

    public int getAge() {
        return age;
    }

    public String getName() {
        return name;
    }

    public String getIdNum() {
        return id;
    }

    public void setAge(int newAge) {
        age = newAge;
    }

    public void setName(String newName) {
        name = newName;
    }

    public void setIdNum(String newId) {
        id = newId;
    }
}
```

```java
// Test and Run achieved Encapsulation

public class RunEncap {

    public static void main(String args[]) {
        EncapTest encap1 = new EncapTest();
        encap1.setName("ABCD");
        encap1.setAge(21);
        encap1.setIdNum("123456789");

        System.out.print("Name: " + encap1.getName() + "\nAge: " + encap1.getAge());
    }
}
```

**Python program to Demonstrate Encapsulation**

```python
class EncapTest:
    def __init__(self):
        self._name = None
        self._id = None
        self._age = 0

    def get_age(self):
        return self._age

    def get_name(self):
        return self._name

    def get_id_num(self):
        return self._id

    def set_age(self, new_age):
        self._age = new_age

    def set_name(self, new_name):
        self._name = new_name

    def set_id_num(self, new_id):
        self._id = new_id

# Test and run achieved encapsulation

def main():
    encap1 = EncapTest()
    encap1.set_name("ABCD")
    encap1.set_age(21)
    encap1.set_id_num("123456789")

    print("Name:", encap1.get_name())
    print("Age:", encap1.get_age())

if __name__ == "__main__":
    main()
```

3. Inheritance

   - Inheritance is the ability to create a new class from an existing class.
   - Using inheritance, we can inherit some or all members and functions from a parent class to a child class. The child class may also have additional members and functions of its own.
   - For example, let us assume we have a class "School" which has attributes like Unique ID, Class Routine, etc., and functions like Biometric Attendance System.
   - There are two more classes called "Student" and "Teacher." Both of these classes can access the methods and functions from the "School" class and have functions of their own, like "Assignment Submission" or "Assignment Grading," respectively.

**Java program to Demonstrate Inheritance**

```java
class Calculation {
    int k;

    public void addition(int x, int y) {
        k = x + y;
        System.out.println("The sum of the given numbers = " + k);
    }

    public void Subtraction(int x, y) {
        k = x - y;
        System.out.println("The difference between the given numbers = " + k);
    }
}
// Inheriting the features of Calculation class in My_Calculation
public class My_Calculation extends Calculation {
    public void multiplication(int x, int y) {
        k = x * y;
        System.out.println("The product of the given numbers = " + k);
    }

    public static void main(String args[]) {
        int a = 50, b = 25;
        My_Calculation cal1 = new My_Calculation();
        cal1.addition(a, b);
        cal1.Subtraction(a, b);
        cal1.multiplication(a, b);
    }
}
```

**Python program to Demonstrate Inheritance**

```python
class Calculation:
    def __init__(self):
        self.k = 0

    def addition(self, x, y):
        self.k = x + y
        print("The sum of the given numbers =", self.k)

    def subtraction(self, x, y):
        self.k = x - y
        print("The difference between the given numbers =", self.k)


class MyCalculation(Calculation):
    def multiplication(self, x, y):
        self.k = x * y
        print("The product of the given numbers =", self.k)


def main():
    a, b = 50, 25
    cal1 = MyCalculation()
    cal1.addition(a, b)
    cal1.subtraction(a, b)
    cal1.multiplication(a, b)

if __name__ == "__main__":
    main()
```

4. Polymorphism

   - Polymorphism means having many forms. Using polymorphism, a class can exhibit different functionalities even when they have a common interface.
   - Using polymorphism,

 we can call the same member function but make it work differently depending on the type of object that calls the function.
   - For example, let us consider a class called "Addition." When an object with String data type members in it calls this function, the two strings are concatenated. When the object has numeric data type members, the class simply adds the two numbers. Polymorphism eliminates the need to rewrite similar code many times for different objects.

**Java program to Demonstrate Polymorphism**

```java
public class Sum {
    // Overloaded sum().
    // This sum takes two int parameters
    public int sum(int x, int y)
    {
        return (x + y);
    }
    
    // Overloaded sum().
    // This sum takes three int parameters
    public int sum(int x, int y, int z)
    {
        return (x + y + z);
    }
    
    // Overloaded sum().
    // This sum takes two double parameters
    public double sum(double x, double y)
    {
        return (x + y);
    }
  
    // Driver code
    public static void main(String args[])
    {
        Sum s = new Sum();
        System.out.println(s.sum(10, 20));
        System.out.println(s.sum(10, 20, 30));
        System.out.println(s.sum(10.5, 20.5));
    }
}
```

**Python program to Demonstrate Polymorphism**

```python
class Sum:
    def sum(self, x, y):      # will not be used
        return x + y

    def sum(self, x, y, z=0): # 0 is used as a default argument for z
        return x + y + z

# Driver code
def main():
    s = Sum()
    print(s.sum(10, 20))      # calls sum using 0 as an argument for z
    print(s.sum(10, 20, 30))

if __name__ == "__main__":
    main()
```

5. Overloading

   - C++ has the ability to provide operators with a special meaning for a data type, known as operator overloading. We can overload an operator ‘+’ in a class like String so that we can concatenate two strings by using +.
   - In C++, we can overload methods, constructors, and indexed properties.
   - There are two types of overloading in C++: function overloading and operator overloading.
   - Implementing operator overloading in C++:
     - Operator function must be either non-static (member function) or friend function to get overloaded.
     - Operator overloading function can be applied to a member function if the left operand is an object of that class. If the left operand is different, then the operator overloading function must be defined as a non-member function.
     - An operator overloading function can be made a friend function if it needs to require access to the private and protected members of the class.
     - Operator overloading can be achieved by implementing a function that can be either a member function, non-member function, or friend function.

Hence, these four concepts of OOP help in writing better modular and efficient code.

## Examples Using OOP

Here are some examples of how Object-Oriented Programming (OOP) can be applied in different programming languages:

**1. Word Predictor**

   - Word prediction is a feature found in many modern text editors and mobile devices. It uses OOP principles to suggest and complete words or phrases as users type.
   - It involves creating classes and objects to manage dictionaries, user input, and prediction algorithms.
   - Here's an example of how OOP can be used to implement a word predictor (in Python):
     - [Word Predictor Example - main.py](Word_Predictor/main.py)

In this example, you can see how classes and objects are used to organize and manage the functionality of a word predictor. This demonstrates how OOP can be a powerful approach to building complex software systems while maintaining code readability and reusability.

Object-Oriented Programming is a versatile and widely adopted paradigm in software development, and it helps in creating maintainable, modular, and efficient code. These concepts of abstraction, encapsulation, inheritance, polymorphism, and overloading are the building blocks of OOP, enabling developers to design and implement complex systems with ease.
