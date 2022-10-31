# Object Oriented Programming (OOP)

Object Oriented Programming is a fundamental programming paradigm which is based on the concepts of objects and data.
It is the standard way of code that every programmer has to abide by for better readability and reusability of the code.

Object-oriented programming (OOP) is a style of programming characterized by the identification of classes of objects closely linked with the methods (functions) with which they are associated. It also includes ideas of inheritance of attributes and methods.

Object-oriented programming is a programming paradigm based on the concept of "objects", which can contain data and code: data in the form of fields, and code, in the form of procedures. A common feature of objects is that procedures are attached to them and can access and modify the object's data fields.

## Objects

* An object can contain two types of data:
    1. Attributes.
    2. Procedures.

<br>

**Let us take an example:**

Consider a person to be an object.

* Their attributes such as height, weight, age, gender, etc. are the details which give us information about that specific person.
* The person can walk, run, jump, write, sing and perform many other actions and these are called procedures of the object Person.

## Classes

* A class can be defined as the blue-print of an object.
* It essentially provides us the basic scaffolding or structure to create (or instantiate) an object.
* It does not store any data unlike the objects but it tells us what the object of that class does.

------------

## Concepts of OOP

**There are four basic concepts in Object Oriented Programming:**

#### **1. Abstraction**

* It refers to providing only necessary details for running a method to the user without providing any sensitive background information to the user.

* For example, when you are driving a car, you only need to know how to drive it, use the accelerator and break. You do not care about the mechanism of how the car is running. This is how abstraction works.

#### **2. Encapsulation**

* Encapsulation is a process of wrapping the data and the code, that operate on the data into a single entity.

* It can be referred to as a protective wrapper that stops random access of code defined outside that wrapper so that the data is not mishandled and misused.

* For example, if everyone is allowed to access the internal parts of the car, anyone who is inexperienced may mishandle the parts and cause an accident.

### **Java program to Demonstrate Encapsulation**

``` java
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

    public void setAge( int newAge) {
        age = newAge;
    }

    public void setName(String newName) {
        name = newName;
    }

    public void setIdNum( String newId) {
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

        System.out.print("Name : " + encap1.getName() + "\nAge : " + encap1.getAge());
    }
}
```

#### **3. Inheritance**

* Inheritance is the ability to create a new class from an existing class.

* Using inheritance, we can inherit a few or all members and functions from a Parent class to a Child class. The Child class may also have additional members and functions of its own.

* For example, let us assume we have a class School which has attributes like Unique ID, Class Routine, etc and functions like Biometric Attendance System.

* There are two more classes called Student and Teacher. Now, both these classes can access the methods and function from the School class as well as have functions of their own like Assignment Submission or Assignment Grading respectively.

### **Java program to Demonstrate Inheritance** ###

```java
class Calculation {
    int k;

    public void addition(int x, int y) {
        k = x + y;
        System.out.println("The sum of the given numbers = "+k);
    }

    public void Subtraction(int x, int y) {
        k = x - y;
        System.out.println("The difference between the given numbers = "+k);
    }
}
// Inheriting the features of Calculation class in My_Calculation
public class My_Calculation extends Calculation {
    public void multiplication(int x, int y) {
        k = x * y;
        System.out.println("The product of the given numbers = "+k);
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

#### **4. Polymorphism**

* The word Polymorphism means having many forms. Using Polymorphism, a class can exhibit different functionalities even when they have a common interface.

* Using Polymorphism, we can call the same member function but make it work differently depending on the type of object that calls the function.

For example, let us consider a class called Addition:

* In case an object which has String data type members in it calls this function, the two strings are concatenated; when the object has numeric data type members in it, the same class simply adds the two numbers.

* Polymorphism eliminates the possibilities of rewriting almost the same code many times over differently for different objects.

### **Java program to Demonstrate Polymorphism** ###

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

#### **5. Overloading**

* C++ has the ability to provide the operators with a special meaning for a data type, this ability is known as operator overloading. We can overload an operator ‘+’ in a class like String so that we can concatenate two strings by just using +.

* In C++, we can overload:

    1. Methods
    2. Constructors
    3. Indexed properties

#### **Types of overloading in C++**

1. Function overloading
2. Operator overloading

#### Implementing Operator Overloading in C++

* Operator function must be either non-static (member function) or friend function to get overloaded.
* Operator overloading function can be applied on a member function if the left operand is an object of that class, but if the Left operand is different, then the Operator overloading function must be defined as a non-member function.
* An Operator overloading function can be made friend function if it needs to require access to the private and protected members of the class.
* For example, the operator op is an operator function where op is the operator being overloaded, and the operator is the keyword. Operator overloading can be achieved by implementing a function that can be either member function,non- member function or friend function.

**Hence, these four concepts of OOP helps in writing better modular and efficient codes.**
