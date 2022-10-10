## Tree

A tree is non-linear and a hierarchical data structure consisting of a collection of nodes such that each node of the tree stores a value and a list of references to other nodes (the “children”).

### Example

```
Let array of numbers be [100, 7, 2, 17, 3, 25, 1, 36, 19]
// The tree is a specialized method to organize and store data in the computer to be used more effectively
A tree representation of the array would look like this:
                    100
                  /     \
                 19      36
                /  \    /  \
               17   3  25   1
              /  \    
             2    7
```

# Applications of Tree data structure

## Heap
[Read about Heaps here](Heap.md)

## Binary Search Tree

A BST (Binary Search Tree) also known as ordered or sorted binary tree is a rooted binary tree data structure with the key of each internal node being greater than all the keys in the respective node's left subtree and less than the ones in its right subtree

### Example

```
Let array of numbers be [8, 13, 14, 6, 7, 4, 10, 1, 3]
A BST representation of these numbers would look like this:
                        8
                      /   \
                    3       10
                   / \        \
                  1   6        14
                     / \      /
                    4   7    13
```

## AVL Tree

AVL Tree is invented by GM Adelson - Velsky and EM Landis in 1962. The tree is named AVL in honour of its inventors.

AVL Tree can be defined as height balanced binary search tree in which each node is associated with a balance factor which is calculated by subtracting the height of its right sub-tree from that of its left sub-tree.

Tree is said to be balanced if balance factor of each node is in between -1 to 1, otherwise, the tree will be unbalanced and need to be balanced.
Balance Factor (k) = height (left(k)) - height (right(k))

If balance factor of any node is 1, it means that the left sub-tree is one level higher than the right sub-tree. 
If balance factor of any node is 0, it means that the left sub-tree and right sub-tree contain equal height.
If balance factor of any node is -1, it means that the left sub-tree is one level lower than the right sub-tree.

### Example

```
Let array of numbers be [8, 3, 10, 1, 6, 5, 14, 4, 7, 13]
Tree representation
                        8
                      /   \
                    3       10
                   / \     /  \
                  1   6   5    14
                     / \      /
                    4   7    13
                    
Balance Factor (4) = 0
Balance Factor (7) = 0
Balance Factor (13) = 0
Balance Factor (1) = 0
Balance Factor (6) = 0
Balance Factor (5) = 0
Balance Factor (14) = 0
Balance Factor (3) = -1
Balance Factor (10) = 0
Balance Factor (8) = 1

```

## Red Black Tree

A Red Black Tree is a category of the self-balancing binary search tree. It was created in 1972 by Rudolf Bayer who termed them "symmetric binary B-trees."

A red-black tree is a Binary tree where a particular node has color as an extra attribute, either red or black. By check the node colors on any simple path from the root to a leaf, red-black trees secure that no such path is higher than twice as long as any other so that the tree is generally balanced.

Properties of Red-Black Trees
A red-black tree must satisfy these properties:

1. The root is always black.
2. A nil is recognized to be black. This factor that every non-NIL node has two children.
3. Black Children Rule: The children of any red node are black.
4. Black Height Rule: For particular node v, there exists an integer bh (v) such that specific downward path from v to a nil has correctly bh (v) black real (i.e. non-nil) nodes. Call this portion the black height of v. We determine the black height of an RB tree to be the black height of its root.

A tree T is an almost red-black tree (ARB tree) if the root is red, but other conditions above hold.

Let array of numbers be [8, 3, 10, 1, 6, 5, 14, 13, 12]
Tree representation
                        8
                      /   \
                    3       10
                   / \     /  \
                  1   6   5    14
                              /  \
                             13  12
                
Color(8) = B
Color(3) = R
Color(10) = R
Color(1) = B
Color(6) = B
Color(5) = B
Color(14) = B
Color(13) = R
Color(12) = R
Here R denotes red color and B denotes black color.
Each leaf node is having two child nodes with black color and are considered as nil.

## Fenwick Tree

Fenwick tree, also known as binary indexed tree is a data structure that can efficiently update elements and calculate prefix sums in a table of numbers

### Example

```
If you have an array of numbers [5, 2, 9, -3, 5, 20, 10, -7, 2, 3]
A fenwick tree representation would look like this:
Value: 5 7 9 13 5 25 10 41 2 5
Index: 1 2 3 4  5 6  7  8  9 10 (starting from 1)
Let this fenwick tree be T
```

### Summing in a Fenwick Tree
```
Suppose you were to do a RSQ(Ranged Query Sum) from index 1 to 7 so basically RSQ(1, 7)
Normally you would sum from index 1 to 7 of a normal array: 5 + 2 + 9 + (-3) + 5 + 20 + 10 = 48
For a Fenwick Tree, you would take the binary equivalent of 7 which is 0111, then you would go right to left of 0111 and switch the 1s to 0s and sum all of those index, you only stop when either the index is lower than the lower end of the RSQ or the binary becomes all 0s
The sum using Fenwick Tree would look like this: T(0111) + T(0110) + T(0100) + T(0000) = 10 + 25 + 13 = 48
```

### Update Value in Fenwick Tree
```
Suppose we were to add 10 to the value at index 4, the fenwick tree has to update since it is possible that further indexes are dependent on index 4
To change the value at index 4, we would have to update the value at further indexes
Take the binary equivalent of index 4, 0100, now you traverse the binary from left to right starting from the most left 1 and switch the bit from 0 to 1 and the rest of the bit becomes 0
The operations would look something like this: 
T[0100] + 10 = 13 + 10 = 23
T[1000] + 10 = 41 + 10 = 51
T[10000] is out of bounds as 10000 would be 16 and the maximum index of T is 10
```
## Splay Tree
Splay trees are the self-balancing or self-adjusted binary search trees. In other words, we can say that the splay trees are the variants of the binary search trees

A splay tree contains the same operations as a Binary search tree, i.e., Insertion, deletion and searching, but it also contains one more operation, i.e., splaying. So. all the operations in the splay tree are followed by splaying.

### Properties
1.	Follow properties of binary search trees.
2.	Self-balancing.
3.	Recently accessed elements are quick to access again.

### Advantages of Splay Tree
1. In the splay tree, we do not need to store the extra information. In contrast, in AVL trees, we need to store the balance factor of each node that requires extra space, and Red-Black trees also require to store one extra bit of information that denotes the color of the node, either Red or Black.
2. It is the fastest type of Binary Search tree for various practical applications. It is used in Windows NT and GCC compilers.

### Drawbacks of Splay Tree
The major drawback of the splay tree would be that trees are not strictly balanced, i.e., they are roughly balanced. Sometimes the splay trees are linear, so it will take O(n) time complexity.

### Algorithm For Splaying Operation
```
*Splaying an element, is the process of bringing it to the root position by performing suitable rotation operations.

Splay(T, N)  
while(n->parent !=Null)  
  if(n->parent==T->root)  
    if(n==n->parent->left)  
      right_rotation(T, n->parent)  
    else  
      left_rotation(T, n->parent)  
  else  
    p= n->parent  
    g = p->parent  
if(n=n->parent->left && p=p->parent->left)  
  right.rotation(T, g), right.rotation(T, p)  
else if(n=n->parent->right && p=p->parent->right)  
  left.rotation(T, g), left.rotation(T, p)  
else if(n=n->parent->left && p=p->parent->right)  
  right.rotation(T, p), left.rotation(T, g)  
else  
  left.rotation(T, p), right.rotation(T, g)  
  
Implementation of right.rotation(T, x)  
  right.rotation(T, x)  
  y= x->left  
  x->left=y->right  
  y->right=x  
  return y  
```
### Example
```
                      10
                    /    \
                   7      15
                  / \    /  \
                 1   9  13   20
                /             \
              -1              30


To search any element in the splay tree, first, we will perform the standard binary search tree operation. As 7 is less than 10 so we will come to the left of the root node. After performing the search operation, we need to perform splaying. Here splaying means that the operation that we are performing on any element should become the root node after performing some rearrangements. The rearrangement of the tree will be done through the rotations.

Zig rotations: The zig rotations are used when the item to be searched is either a root node or the child of a root node (i.e., left or the right child).

The following are the cases that can exist in the splay tree while searching:

Case 1: If the search item is a root node of the tree.

Case 2: If the search item is a child of the root node, then the two scenarios will be there:

If the child is a left child, the right rotation would be performed, known as a zig right rotation.
If the child is a right child, the left rotation would be performed, known as a zig left rotation.

In the above example, we have to search 7 element in the tree. We will follow the below steps:

Step 1: First, we compare 7 with a root node. As 7 is less than 10, so it is a left child of the root node.

Step 2: Once the element is found, we will perform splaying. The right rotation is performed so that 7 becomes the root node of the tree, as shown below:

                    7
                  /  \
                 1    10
                /    /  \
              -1    9    15
                        /  \
                       13   20
                             \
                             30
                             
```
### Some Real life Applications of Tree data structure
1. Store hierarchical data, like folder structure, organization structure, XML/HTML data.
2. B-Tree and B+ Tree : They are used to implement indexing in databases.
3. In Computer Graphics.
4. In java virtual machine.
5. Machine learning algorithm.
    and this count will go on...
