What is a Database?
-------------------

A database is a collection of related data which represents some aspect of the real world. A database system is designed to be built and populated with data for a certain task.

What is DBMS?
-------------

**Database Management System (DBMS)** is a software for storing and retrieving users’ data while considering appropriate security measures. It consists of a group of programs which manipulate the database. The DBMS accepts the request for data from an application and instructs the operating system to provide the specific data. In large systems, a DBMS helps users and other third-party software to store and retrieve data.

DBMS allows users to create their own databases as per their requirement. The term “DBMS” includes the user of the database and other application programs. It provides an interface between the data and the software application.

Example of a DBMS
-----------------

Let us see a simple example of a university database. This database is maintaining information concerning students, courses, and grades in a university environment. The database is organized as five files:

*   The STUDENT file stores data of each student
*   The COURSE file stores contain data on each course.
*   The SECTION stores the information about sections in a particular course.
*   The GRADE file stores the grades which students receive in the various sections
*   The TUTOR file contains information about each professor.

To define DBMS:

*   We need to specify the structure of the records of each file by defining the different types of data elements to be stored in each record.
*   We can also use a coding scheme to represent the values of a data item.
*   Basically, your Database will have 5 tables with a foreign key defined amongst the various tables.

History of DBMS
---------------

Here, are the important landmarks from the history:

*   1960 – Charles Bachman designed first DBMS system
*   1970 – Codd introduced IBM’S Information Management System (IMS)
*   1976- Peter Chen coined and defined the Entity-relationship model also know as the ER model
*   1980 – Relational Model becomes a widely accepted database component
*   1985- Object-oriented DBMS develops.
*   1990s- Incorporation of object-orientation in relational DBMS.
*   1991- Microsoft ships MS access, a personal DBMS and that displaces all other personal DBMS products.
*   1995: First Internet database applications
*   1997: XML applied to database processing. Many vendors begin to integrate XML into DBMS products.

Characteristics of DBMS
-----------------------

Here are the characteristics and properties of Database Management System:

*   Provides security and removes redundancy
*   Self-describing nature of a database system
*   Insulation between programs and data abstraction
*   Support of multiple views of the data
*   Sharing of data and multiuser transaction processing
*   Database Management Software allows entities and relations among them to form tables.
*   It follows the ACID concept ( Atomicity, Consistency, Isolation, and Durability).
*   DBMS supports multi-user environment that allows users to access and manipulate data in parallel.

Popular DBMS Software
---------------------

Here, is the list of some popular DBMS system:

*   MySQL
*   Microsoft Access
*   Oracle
*   PostgreSQL
*   dBASE
*   FoxPro
*   SQLite
*   IBM DB2
*   LibreOffice Base
*   MariaDB
*   Microsoft SQL Server etc.

Application of DBMS
-------------------

Below are the popular database system applications:

 * Banking:

   For customer information, account activities, payments, deposits, loans, etc.
* Airlines:
  For reservations and schedule information.

*   Universities:
    For student information, course registrations, colleges and grades.

*   Telecommunication:
   It helps to keep call records, monthly bills, maintaining balances, etc.

*   Finance:
 For storing information about stock, sales, and purchases of financial instruments like stocks and bonds.

*   Sales:
Use for storing customer, product & sales information.

*   Manufacturing:
It is used for the management of supply chain and for tracking production of items. Inventories status in warehouses.

*   HR Management: 
For information about employees, salaries, payroll, deduction, generation of paychecks, etc.

Types of DBMS
-------------

Types of DBMS

Tha main Four Types of Database Management System are:

*   Hierarchical database
*   Network database
*   Relational database
*   Object-Oriented database

### Hierarchical DBMS

In a Hierarchical database, model data is organized in a tree-like structure. Data is Stored Hierarchically (top down or bottom up) format. Data is represented using a parent-child relationship. In Hierarchical DBMS parent may have many children, but children have only one parent.

### Network Model

The network database model allows each child to have multiple parents. It helps you to address the need to model more complex relationships like as the orders/parts many-to-many relationship. In this model, entities are organized in a graph which can be accessed through several paths.

### Relational Model

Relational DBMS is the most widely used DBMS model because it is one of the easiest. This model is based on normalizing data in the rows and columns of the tables. Relational model stored in fixed structures and manipulated using SQL.

### Object-Oriented Model

In Object-oriented Model data stored in the form of objects. The structure which is called classes which display data within it. It is one of the components of DBMS that defines a database as a collection of objects which stores both data members values and operations.  

Advantages of DBMS
------------------

*   DBMS offers a variety of techniques to store & retrieve data
*   DBMS serves as an efficient handler to balance the needs of multiple applications using the same data
*   Uniform administration procedures for data
*   Application programmers never exposed to details of data representation and storage.
*   A DBMS uses various powerful functions to store and retrieve data efficiently.
*   Offers Data Integrity and Security
*   The DBMS implies integrity constraints to get a high level of protection against prohibited access to data.
*   A DBMS schedules concurrent access to the data in such a manner that only one user can access the same data at a time
*   Reduced Application Development Time

Disadvantage of DBMS
--------------------

DBMS may offer plenty of advantages but, it has certain flaws-

*   Cost of Hardware and Software of a DBMS is quite high which increases the budget of your organization.
*   Most database management systems are often complex systems, so the training for users to use the DBMS is required.
*   In some organizations, all data is integrated into a single database which can be damaged because of electric failure or database is corrupted on the storage media
*   Use of the same program at a time by many users sometimes lead to the loss of some data.
*   DBMS can’t perform sophisticated calculations

When not to use a DBMS system?
------------------------------

Although, DBMS system is useful. It is still not suited for specific task mentioned below:

Not recommended when you do not have the budget or the expertise to operate a DBMS. In such cases, Excel/CSV/Flat Files could do just fine.

Summary
-------

*   DBMS definition: A database is a collection of related data which represents some aspect of the real world
*   The full form of DBMS is Database Management System. DBMS stands for Database Management System is a software for storing and retrieving users’ data by considering appropriate security measures.
*   DBMS Provides security and removes redundancy
*   DBMS has many advantages over tradition Flat File management system
*   Some Characteristics of DBMS are Security, Self-describing nature, Insulation between programs and data abstraction, Support of multiple views of the data, etc.
*   End-Users, Application Programmers, and Database Administrators are they type of users who access a DBMS
*   DBMS is widely used in Banking, Airlines, Telecommunication, Finance and other industries
*   The main Four DBMS types are 1) Hierarchical 2) Network 3) Relational 4) Object-Oriented DBMS
*   DBMS serves as an efficient handler to balance the needs of multiple applications using the same data
*   Cost of Hardware and Software of a DBMS is quite high which increases the budget of your organization