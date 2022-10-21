# Hashing 

Hashing is a technique or process of mapping keys, and values into the hash table by using a hash function. It is done for faster access to elements. The efficiency of mapping depends on the efficiency of the hash function used.<br>


## Why to use Hashing? 
If you observe carefully, in a balanced binary search tree, if we try to search , insert or delete any element then the time complexity for the same is **O(logn)**. Now there might be a situation when our applications want to do the same operations in a faster way i.e. in a more optimized way and here hashing comes into play. In hashing, all the above operations can be performed in **O(1)** i.e. constant time. It is important to understand that the worst case time complexity for hashing remains **O(n)** but the average case time complexity is **O(1)**.<br>
Now let us understand a few basic operations of hashing.<br>

## Basic Operations:

#### HashTable:
> This operation is used in order to create a new hash table.<br>
#### Delete:
> This operation is used in order to delete a particular key-value pair from the hash table.
#### Get:
> This operation is used in order to search a key inside the hash table and return the value that is associated with that key.
#### Put:
> This operation is used in order to insert a new key-value pair inside the hash table.
#### Delete Hash Table:
> This operation is used in order to delete the hash table

## Hashing Components:


*  **Hash Table :** An array that stores pointers to records corresponding to a given phone number. An entry in hash table is NIL if no existing phone number has hash function value equal to the index for the entry.  In simple terms, we can say that hash table is a generalization of array. Hash table gives the functionality in which a collection of data is stored in such a way that it is easy to find those items later if required. This makes searching of an element very efficient.

*  **Hash Function :** A function that converts a given big phone number to a small practical integer value. The mapped integer value is used as an index in hash table. So, in simple terms we can say that a hash function is used to transform a given key into a specific slot index. Its main job is to map each and every possible key into a unique slot index. If every key is mapped into a unique slot index, then the hash function is known as a perfect hash function. It is very difficult to create a perfect hash function but our job as a programmer is to create such a hash function with the help of which the number of collisions are as few as possible. Collision is discussed ahead.
</ul>

*  **Collision Handling :** Since a hash function gets us a small number for a big key, there is possibility that two keys result in same value. The situation where a newly inserted key maps to an already occupied slot in hash table is called collision and must be handled using some collision handling technique. Following are the ways to handle collisions: 

* **Chaining :** The idea is to make each cell of hash table point to a linked list of records that have same hash function value. Chaining is simple, but requires additional memory outside the table.

* **Open Addressing :**` In open addressing, all elements are stored in the hash table itself. Each table entry contains either a record or NIL. When searching for an element, we examine the table slots one by one until the desired element is found or it is clear that the element is not in the table.
