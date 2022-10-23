# Traveling Salesman Problem
The Traveling Salesman Problem (TSP) is a classic and well-known algorithmic problem in the Computer Science field, and with this problem, we can understand how a complex algorithm can really work. The problem describes a salesman that wants to find the shortest route between a set of points and locations that must be visited. In the problem statement, the points are the cities a salesperson might visit. The salesman‘s goal is to keep both the travel costs and the distance traveled as low as possible.

![copyright Manning Publications, drawn by adit.io](https://www.notion.so/image/https%3A%2F%2Fs3-us-west-2.amazonaws.com%2Fsecure.notion-static.com%2F7285e03b-2006-43c6-8d08-9a4a24e54424%2FUntitled.png?table=block&id=8ea72243-613a-4030-ae06-1c1eaf227556&spaceId=36542183-4e95-47a3-af7d-12902ae71555&width=2000&userId=6dc7187a-d5e3-4169-b8ca-7629c2527dd3&cache=v2)

To solve this problem, the classic method is to use brute force, when we can check all possibilities of combinations between the cities, sum the distance and return the combination with a lower distance. The problem with this method is that, with more cities, it more complex will be. 

With 5 cities, we have 120 permutations to discover the best way, but with 6 we have 720 permutations, and the number of permutations increases so fast in a factorial time as we can see in the image below:

![copyright Manning Publications, drawn by adit.io](https://www.notion.so/image/https%3A%2F%2Fs3-us-west-2.amazonaws.com%2Fsecure.notion-static.com%2F9edbc23e-b780-4299-9eb9-6afd849f6eec%2FUntitled.png?table=block&id=8d923635-d688-4906-840a-1a0b0a9708b5&spaceId=36542183-4e95-47a3-af7d-12902ae71555&width=2000&userId=6dc7187a-d5e3-4169-b8ca-7629c2527dd3&cache=v2)

Because of this, this brute force algorithm is `O(n!)` which means is very complex to solve. The following image shows the complexity of different algorithms, and how the time to solve increases. 

![copyright Manning Publications, drawn by adit.io](https://www.notion.so/image/https%3A%2F%2Fs3-us-west-2.amazonaws.com%2Fsecure.notion-static.com%2F6831d3d7-354d-4d7a-a760-e59bc791a15d%2FUntitled.png?table=block&id=d69b829f-e409-4738-9b45-81b1e708e101&spaceId=36542183-4e95-47a3-af7d-12902ae71555&width=2000&userId=6dc7187a-d5e3-4169-b8ca-7629c2527dd3&cache=v2)


Brute force will return the best solution, but with more cities be impossible to solve the problem in a human lifetime. So in this case, a good solution is the better choice, and to find this good solution, scientists create a lot of heuristics to solve it. One of these heuristics is The Nearest Neighbor Method.

The Nearest Neighbor Method is perhaps the simplest Traveling Salesman Problem heuristic. The key to this method is to always visit the nearest destination and then go back to the first city when all other cities are visited. To solve the TSP using this method, choose a random city and then look for the closest unvisited city and go there. Once you have visited all cities, you must return to the first city.

![copyright Manning Publications, drawn by adit.io](https://www.notion.so/image/https%3A%2F%2Fs3-us-west-2.amazonaws.com%2Fsecure.notion-static.com%2F3e0840c5-ecee-4db4-9876-e7cb68ce6cb9%2FUntitled.png?table=block&id=4f5d3c2e-ba9c-4e8c-b708-ea62d097a009&spaceId=36542183-4e95-47a3-af7d-12902ae71555&width=2000&userId=6dc7187a-d5e3-4169-b8ca-7629c2527dd3&cache=v2)


## Script
The following code is the implementation of these two methods using Python language:

```python
"""
    Description: Brute-force and Nearest Neighbor Method implementation for solving the TSP.
    Reference: https://programmingpraxis.com/2010/03/16/traveling-salesman-nearest-neighbor/
"""

from itertools import permutations
from random import randint
from timeit import timeit
 
#  complex numbers are used to represent cities because python has them built-in.
#  could easily be changed to 2-tuples by changing random_cities and leg_cost
 
def random_cities(n,max_x=100,max_y=100):
    '''return set of n cities randomly placed on a max_x by max_y grid.'''
     
    cities = set()
    while len(cities) < n:
        cities.add(complex(randint(0,max_x),randint(0,max_y)))
         
    return cities
 
def leg_cost(city1,city2):
    '''returns cost of travel from city1 to city2.'''
     
    return abs(city1 - city2)
 
def path_cost(path):
    '''total cost to travel the path and return to starting city.'''
     
    return sum(leg_cost(path[n-1],path[n]) for n in range(len(path)))
 
def brute_force(cities):
    '''finds shortest path by exhaustively checking all paths.'''
     
    return min(permutations(cities), key=path_cost)
 
def nearest_neighbor(cities):
    '''finds a path through the cities using a nearest neighbor heuristic.'''
     
    unvisited = cities.copy()
    visited = [unvisited.pop()]
 
    while unvisited:
        city = min(unvisited, key=lambda c: leg_cost(visited[-1],c))
        visited.append(city)
        unvisited.remove(city)
         
    return visited
 
 
setup = "from __main__ import brute_force, nearest_neighbor, out"
out = [ None ]
 
for ncities in [5, 7, 10]:
    cities = random_cities(ncities)
     
    t_bf = timeit(stmt="out[0]=brute_force({0})".format(cities), setup=setup, number=1)
    t_nn = timeit(stmt="out[0]=nearest_neighbor({0})".format(cities), setup=setup, number=1)
    
    result = f"""
        Number of cities: {ncities}
        Time (in seconds)      
        brute_force     : {t_bf}  
        nearest_neighbor: {t_nn}  
    """

    print(result)
```

This script returns the differences between these two methods, looking at the result, the Nearest Neighbor Method is very faster than the Brute Force method. The test was executed with a Mac Book Pro 2016, 2.6 GHz Quad-Core Intel Core i7, 16 GB 2133 MHz LPDDR3.

```

Number of cities: 5
Time (in seconds)      
brute_force     : 0.0002826790005201474  
nearest_neighbor: 1.3473996659740806e-05  


Number of cities: 7
Time (in seconds)      
brute_force     : 0.013475298997946084  
nearest_neighbor: 3.769699833355844e-05  


Number of cities: 10
Time (in seconds)      
brute_force     : 11.02085268299561  
nearest_neighbor: 2.5415996788069606e-05  
```
## References:

- Bhargava, A., 2016. *Grokking Algorithms: An illustrated guide for programmers and other curious people*. Simon and Schuster.

- Images from [https://github.com/egonSchiele/grokking_algorithms](https://github.com/egonSchiele/grokking_algorithms) copyright Manning Publications, drawn by [adit.io](http://adit.io/)

- Ma, S., 2020. *Solving the Travelling Salesman Problem for deliveries* [https://blog.routific.com/travelling-salesman-problem](https://blog.routific.com/travelling-salesman-problem)

- M, 2010. *Traveling Salesman: Nearest Neighbor* [https://programmingpraxis.com/2010/03/16/traveling-salesman-nearest-neighbor/](https://programmingpraxis.com/2010/03/16/traveling-salesman-nearest-neighbor/)