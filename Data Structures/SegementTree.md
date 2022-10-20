## Segment Tree

In computer science, a Segment Tree, also known as a statistic tree, is a tree data structure used for storing information about intervals, or segments. It allows querying which of the stored segments contain a given point. It is, in principle, a static structure; that is, it’s a structure that cannot be modified once it’s built. A similar data structure is the interval tree.

A segment tree for a set I of n intervals uses **O(n log n)** storage and can be built in **O(n log n)** time. Segment trees support searching for all the intervals that contain a query point in time **O(log n + k)**, k being the number of retrieved intervals or segments.

![Segment Tree](https://media.geeksforgeeks.org/wp-content/cdn-uploads/segment-tree1.png)
