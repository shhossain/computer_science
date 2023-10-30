# Traversal Technique
Unlike how we traverse a graph we do not need to maintain a visited array while traversing a tree. We just need to 
maintain two values first is the parent of the current node and then the node itself. This works as if ever a condition is 
encountered where we start traversing backwards then that won't happen as it has been already been taken care in the
traversal itself.
#Complete Code
```

# Python3 code to traverse a given tree 
# Function for dfs traversal 
def dfs(a, v, u, parent): 
    # Traverse the tree 
    for child in v[u]: 
          
        # If child is parent, then we continue  
        # without recursing further  
        if child == parent: 
            continue
          
        # Call dfs for further traversal  
        dfs(a, v, child, u)   
        # node and present visited node  
def maximumValue(a, v): 
    dfs(a, v, 1, 0) 
# Driver Code  
def main():  
    # Number of nodes  
    n = 14
    # Adjacency list as a dictionary 
    v = {} 
    for i in range(n + 1): 
        v[i] = []       
    # Create undirected edges  
    # initialize the tree given in the diagram  
    v[1].append(2), v[2].append(1) 
    v[1].append(3), v[3].append(1)  
    v[1].append(4), v[4].append(1)  
    v[2].append(5), v[5].append(2)  
    v[2].append(6), v[6].append(2)  
    v[3].append(7), v[7].append(3)  
    v[4].append(8), v[8].append(4)  
    v[4].append(9), v[9].append(4)  
    v[4].append(10), v[10].append(4)  
    v[5].append(11), v[11].append(5)  
    v[5].append(12), v[12].append(5)  
    v[7].append(13), v[13].append(7)  
    v[7].append(14), v[14].append(7)     
    # Values of node 1, 2, 3....14  
    a = [ 3, 2, 1, 10, 1, 3, 9, 
          1, 5, 3, 4, 5, 9, 8 ] 
    # Function call 
    (maximumValue(a, v))
main()
```
