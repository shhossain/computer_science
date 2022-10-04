# 0/1 Knapsack Problem

0-1 Knapsack Problem using best first branch and bound method 
Returns maxprofit with list storing the index position of the items in the best solution.
The profit is maximized while staying under the weight limit.
This program uses a priority queue to store the nodes ordered by best bound,
the node with the highest bound value is returned when removing from the priority queue.
The best first approach arrives at an optimal solition faster than breadth first search.


## Algorithm:
```
- Sort all items in decreasing order of ratio of value per unit weight so that an upper bound can be computed using Greedy Approach.
- Initialize maximum profit, maxProfit = 0
- Create an empty queue, Q.
- Create a dummy node of decision tree and enqueue it to Q. 
- Profit and weight of dummy node are 0.
- Do following while Q is not empty.
- Extract an item from Q. Let the extracted item be u.
- Compute profit of next level node. If the profit is more than maxProfit, then update maxProfit.
- Compute bound of next level node. If bound is more than maxProfit, then add next level node to Q.
- Consider the case when next level node is not considered as part of solution and add a node to queue with level as next, but weight and profit without considering next level nodes.

```


## Implementation:

* [C](#c)
<!-- * [C++](#cpp) -->
* [Python](#python)


## C

```c
#include<stdio.h>
int max(int a, int b) {
   if(a>b){
      return a;
   } else {
      return b;
   }
}
int knapsack(int W, int wt[], int val[], int n) {
   int i, w;
   int knap[n+1][W+1];
   for (i = 0; i <= n; i++) {
      for (w = 0; w <= W; w++) {
         if (i==0 || w==0)
            knap[i][w] = 0;
         else if (wt[i-1] <= w)
            knap[i][w] = max(val[i-1] + knap[i-1][w-wt[i-1]], knap[i-1][w]);
         else
            knap[i][w] = knap[i-1][w];
      }
   }
   return knap[n][W];
}
int main() {
   int val[] = {20, 25, 40};
   int wt[] = {25, 20, 30};
   int W = 50;
   int n = sizeof(val)/sizeof(val[0]);
   printf("The solution is : %d", knapsack(W, wt, val, n));
   return 0;
}

```


## Python
```python
class Priority_Queue:
    def __init__(self):
        self.pqueue = []
        self.length = 0
    
    def insert(self, node):
        for i in self.pqueue:
            get_bound(i)
        i = 0
        while i < len(self.pqueue):
            if self.pqueue[i].bound > node.bound:
                break
            i+=1
        self.pqueue.insert(i,node)
        self.length += 1

    def print_pqueue(self):
        for i in list(range(len(self.pqueue))):
            print ("pqueue",i, "=", self.pqueue[i].bound)
                    
    def remove(self):
        try:
            result = self.pqueue.pop()
            self.length -= 1
        except: 
            print("Priority queue is empty, cannot pop from empty list.")
        else:
            return result
        
class Node:
    def __init__(self, level, profit, weight):
        self.level = level
        self.profit = profit
        self.weight = weight
        self.items = []
        
            
def get_bound(node):
    if node.weight >= W:
        return 0
    else:
        result = node.profit
        j = node.level + 1
        totweight = node.weight
        while j <= n-1 and totweight + w[j] <= W:
            totweight = totweight + w[j]
            result = result + p[j]
            j+=1
        k = j
        if k<=n-1:
            result = result + (W - totweight) * p_per_weight[k]
        return result


nodes_generated = 0
pq = Priority_Queue()

v = Node(-1, 0, 0) 
nodes_generated+=1
maxprofit = 0 # maxprofit initialized to $0
v.bound = get_bound(v)

pq.insert(v)

while pq.length != 0:
    
    v = pq.remove() #remove node with best bound

    if v.bound > maxprofit: #check if node is still promising
        #set u to the child that includes the next item
        u = Node(0, 0, 0)
        nodes_generated+=1
        u.level = v.level + 1
        u.profit = v.profit + p[u.level]
        u.weight = v.weight + w[u.level]
        #take v's list and add u's list
        u.items = v.items.copy()
        u.items.append(u.level) # adds next item

        if u.weight <= W and u.profit > maxprofit: 
            #update maxprofit
            maxprofit = u.profit
            bestitems = u.items
        u.bound = get_bound(u)

        if u.bound > maxprofit:
            pq.insert(u)

        #set u to the child that does not include the next item
        u2 = Node(u.level, v.profit, v.weight)
        nodes_generated+=1
        u2.bound = get_bound(u2)
        u2.items = v.items.copy()
        if u2.bound > maxprofit:
            pq.insert(u2)


print("\nEND maxprofit = ", maxprofit, "nodes generated = ", nodes_generated)
print("bestitems = ", bestitems)
```


**Time complexity:** O(2*n)

**Auxiliary space:** O(2*n)


## Applications of Knapsack problem

- Machine Scheduling 
- Space Allocation
- Asset Opitmization
