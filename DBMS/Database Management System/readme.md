## What is a Database?

A database is a collection of related data which represents some aspect of the real world. A database system is designed to be built and populated with data for a certain task.

## What is DBMS?

**Database Management System (DBMS)** is a software for storing and retrieving users’ data while considering appropriate security measures. It consists of a group of programs which manipulate the database. The DBMS accepts the request for data from an application and instructs the operating system to provide the specific data. In large systems, a DBMS helps users and other third-party software to store and retrieve data.

DBMS allows users to create their own databases as per their requirement. The term “DBMS” includes the user of the database and other application programs. It provides an interface between the data and the software application.

## Example of a DBMS

Let us see a simple example of a university database. This database is maintaining information concerning students, courses, and grades in a university environment. The database is organized as five files:

- The STUDENT file stores data of each student
- The COURSE file stores contain data on each course.
- The SECTION stores the information about sections in a particular course.
- The GRADE file stores the grades which students receive in the various sections
- The TUTOR file contains information about each professor.

To define DBMS:

- We need to specify the structure of the records of each file by defining the different types of data elements to be stored in each record.
- We can also use a coding scheme to represent the values of a data item.
- Basically, your Database will have 5 tables with a foreign key defined amongst the various tables.

## History of DBMS

Here, are the important landmarks from the history:

- 1960 – Charles Bachman designed first DBMS system
- 1970 – Codd introduced IBM’S Information Management System (IMS)
- 1976- Peter Chen coined and defined the Entity-relationship model also know as the ER model
- 1980 – Relational Model becomes a widely accepted database component
- 1985- Object-oriented DBMS develops.
- 1990s- Incorporation of object-orientation in relational DBMS.
- 1991- Microsoft ships MS access, a personal DBMS and that displaces all other personal DBMS products.
- 1995: First Internet database applications
- 1997: XML applied to database processing. Many vendors begin to integrate XML into DBMS products.




Characteristics of DBMS
-----------------------


Here are the characteristics and properties of Database Management System:

- Provides security and removes redundancy
- Self-describing nature of a database system
- Insulation between programs and data abstraction
- Support of multiple views of the data
- Sharing of data and multiuser transaction processing
- Database Management Software allows entities and relations among them to form tables.
- It follows the ACID concept ( Atomicity, Consistency, Isolation, and Durability).
- DBMS supports multi-user environment that allows users to access and manipulate data in parallel.

More about ACID compliance in DBMS
-----------------------
It has all to do with performing smooth DB transactions with reliability, an overview of each is below:

- **Atomicity**: Commits each transaction operation, at any point of failure entire transaction gets rolled back.
Take an example of an ordering system, it requires multiple updates to various tables, from 
"Order Table" to "Customer table" and finally payment table.
An order is successful only after the payment for it is done, so whole transaction to all these 
tables should go in single commit, if anything fails in between then the transaction will
be rolled back nullify all the updates. Without atomicity there might be case when user payment 
fails but order gets placed successfully.
Another one is in case of crashes or service outages during a transaction, 
without atomicity, it would be impossible to know how far the transaction went.
- **Consistency**: Maintains data integrity with every transaction, or it rolls back. 
It ensures which state the database could assume, in case of any illegal state the transaction 
will roll back. Example of consistency is a negative bank balance of user should stop him from 
spending any further. This is achieved by putting certain constraints on the Data, the transactions
either follows those constraints or rolls back to previous state.
- **Isolation**: Reads and writes of one transaction should not be impactful to each other and should 
work in isolation. If multiple transactions are happening to the same DB then it must be ensured 
that they get performed in an order to avoid data corruption. Suppose if a DB column is being 
written/update, data inside it should prevent any reads/writes until this one completed. 
This is achieved by adding a global queue to perform transactions in order for those who are on the same DB.
Every DB has its own degree of isolation, a DB which provide less isolation could handle more concurrency.
- **Durability**: Once a commit is successful it persists permanently. The DB maintains a changelog of each commit, 
An example is in case of DB restarted, then it resumes itself to the last state.

**_Some popular DB and their status on following ACID compliance_**:
- **MongoDB**: ACID compliant since version 4 and onward
- **MYSQL**: ACID compliant
- **PostgreSQL**: ACID compliant
- **Redis**: This NoSQL DB is partially ACID compliant, because it cannot ensure consistency and 
durability for each transaction.




## Popular DBMS Software

Here, is the list of some popular DBMS system:

- MySQL
- Microsoft Access
- Oracle
- PostgreSQL
- dBASE
- FoxPro
- SQLite
- IBM DB2
- LibreOffice Base
- MariaDB
- Microsoft SQL Server etc.
- firebase

## Application of DBMS

Below are the popular database system applications:

- Banking:

  For customer information, account activities, payments, deposits, loans, etc.

- Airlines:
  For reservations and schedule information.

- Universities:
  For student information, course registrations, colleges and grades.

- Telecommunication:
  It helps to keep call records, monthly bills, maintaining balances, etc.

- Finance:
  For storing information about stock, sales, and purchases of financial instruments like stocks and bonds.

- Sales:
  Use for storing customer, product & sales information.

- Manufacturing:
  It is used for the management of supply chain and for tracking production of items. Inventories status in warehouses.

- HR Management:
  For information about employees, salaries, payroll, deduction, generation of paychecks, etc.

- Railway Reservation System –
  In the rail route reservation framework, the information base is needed to store the record or information of ticket
  appointments, status about train’s appearance, and flight. Additionally, if trains get late, individuals become acquainted
  with it through the information base update.

Library Management System – ...

Education Sector –

Credit card exchanges –

Social Media Sites –

Broadcast communications –

## Types of DBMS

The entire structure of a database can be described using a data
model. A data model is a collection of conceptual tools for describing
Data models can be classified into following types.
1.Object Based Logical Models.
2.Record Based Logical Models.
3.Physical Models.

## Object Based Logical Models

These models can be used in describing the data at the logical and view levels.
These models are having flexible structuring capabilities classified into following types.
a) The entity-relationship model.
b) The object-oriented model.
c) The semantic data model.
d) The functional data model.

### The Entity-Relationship Model

ER model stands for an Entity-Relationship model. It is a high-level data model. This model is used to define the data elements and relationship for a specified system.
It develops a conceptual design for the database. It also develops a very simple and easy to design view of data.
In ER modeling, the database structure is portrayed as a diagram called an entity-relationship diagram.

### The Object-Oriented Model

The Object-Oriented Model is the data model in which data is stored in form of objects, which are instances of classes. These classes and objects together make an object-oriented data model. An extension of the ER model with notions of functions, encapsulation, and object identity, as well. This model supports a rich type system that includes structured and collection types. Thus, in 1980s, various database systems following the object-oriented approach were developed. Here, the objects are nothing but the data carrying its properties.

### The Semantic Data Model

The semantic data model is a method of structuring data in order to represent it in a specific logical way. It is a conceptual data model that includes semantic information that adds a basic meaning to the data and the relationships that lie between them. This approach to data modeling and data organization allows for the easy development of application programs and also for the easy maintenance of data consistency when data is updated.

### The Functional Data Model

Functional Modelling gives the process perspective of the object-oriented analysis model and an overview of what the system is supposed to do. It defines the function of the internal processes in the system with the aid of Data Flow Diagrams (DFDs). It depicts the functional derivation of the data values without indicating how they are derived when they are computed, or why they need to be computed.

## Record Based Logical Models

Tha main Four Types of Record Based Logical Models are:

- Hierarchical database
- Network database
- Relational database
- Object-Oriented database

### Hierarchical DBMS

In a Hierarchical database, model data is organized in a tree-like structure. Data is Stored Hierarchically (top down or bottom up) format. Data is represented using a parent-child relationship. In Hierarchical DBMS parent may have many children, but children have only one parent.

### Network Model

The network database model allows each child to have multiple parents. It helps you to address the need to model more complex relationships like as the orders/parts many-to-many relationship. In this model, entities are organized in a graph which can be accessed through several paths.

### Relational Model

Relational DBMS is the most widely used DBMS model because it is one of the easiest. This model is based on normalizing data in the rows and columns of the tables. Relational model stored in fixed structures and manipulated using SQL.

### Object-Oriented Model

In Object-oriented Model data stored in the form of objects. The structure which is called classes which display data within it. It is one of the components of DBMS that defines a database as a collection of objects which stores both data members values and operations.

## Advantages of DBMS

- DBMS offers a variety of techniques to store & retrieve data
- DBMS serves as an efficient handler to balance the needs of multiple applications using the same data
- Uniform administration procedures for data
- Application programmers never exposed to details of data representation and storage.
- A DBMS uses various powerful functions to store and retrieve data efficiently.
- Offers Data Integrity and Security
- The DBMS implies integrity constraints to get a high level of protection against prohibited access to data.
- A DBMS schedules concurrent access to the data in such a manner that only one user can access the same data at a time
- Reduced Application Development Time

## Disadvantage of DBMS

DBMS may offer plenty of advantages but, it has certain flaws-

- Cost of Hardware and Software of a DBMS is quite high which increases the budget of your organization.
- Most database management systems are often complex systems, so the training for users to use the DBMS is required.
- In some organizations, all data is integrated into a single database which can be damaged because of electric failure or database is corrupted on the storage media
- Use of the same program at a time by many users sometimes lead to the loss of some data.
- DBMS can’t perform sophisticated calculations

## When not to use a DBMS system?

Although, DBMS system is useful. It is still not suited for specific task mentioned below:

Not recommended when you do not have the budget or the expertise to operate a DBMS. In such cases, Excel/CSV/Flat Files could do just fine.


The Future of Databases & Database Management : 
-----------------------------------------------
Data is the lifeblood of so many of the applications and processes that drive our world. How to collect, store, and sort a continuously growing mountain 
of data will be a critical question to answer for database management platforms and their developers.
Just like the beginning of the history of databases and database management, the future will be closely tied to overall developments in processing and 
computing. Machine learning and artificial intelligence will continue to improve and become integral parts of databases and their management. Faster and 
more efficient database management tools will come to market while industry standards continue to iterate based on latest developments. In the end, the 
future looks incredibly bright for the database industry.

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

