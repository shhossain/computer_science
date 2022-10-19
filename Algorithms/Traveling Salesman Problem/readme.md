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

## References:

- Bhargava, A., 2016. *Grokking Algorithms: An illustrated guide for programmers and other curious people*. Simon and Schuster.

- Images from [https://github.com/egonSchiele/grokking_algorithms](https://github.com/egonSchiele/grokking_algorithms) copyright Manning Publications, drawn by [adit.io](http://adit.io/)

- Ma, S., 2020. *Solving the Travelling Salesman Problem for deliveries* [https://blog.routific.com/travelling-salesman-problem](https://blog.routific.com/travelling-salesman-problem)