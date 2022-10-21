Given a height h, count and return the maximum number of balanced binary trees possible with height h. A balanced binary tree is one in which for every node, the difference between heights of left and right subtree is not more than 1.

**Examples :**
```
Input : h = 3
Output : 15

Input : h = 4
Output : 315
```
Height of tree, h = 1 + max(left height, right height)
Since the difference between the heights of left and right subtree is not more than one, possible heights of left and right part can be one of the following: 
 

1.(h-1), (h-2)
2.(h-2), (h-1)
3.(h-1), (h-1)

```
count(h) = count(h-1) * count(h-2) + 
           count(h-2) * count(h-1) + 
           count(h-1) * count(h-1)
        = 2 * count(h-1) * count(h-2) +  
          count(h-1) * count(h-1)
       = count(h-1) * (2*count(h - 2) + 
                          count(h - 1))
```
A recursive function to count no of balanced binary trees of height h is: 
```
int countBT(int h)
{
    // One tree is possible with height 0 or 1
    if (h == 0 || h == 1)
        return 1;
    return countBT(h-1) * (2 *countBT(h-2) +
                              countBT(h-1));
}
```

As we can see, sub-problems are solved repeatedly. Therefore we store the results as we compute them. 

An efficient dynamic programming approach will be as follows : 
