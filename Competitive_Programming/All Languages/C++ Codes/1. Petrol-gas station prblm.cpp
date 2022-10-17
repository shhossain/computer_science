/*There are N gas stations along a circular route, where the amount of gas at station i is arr[i]. You have a car with an unlimited gas tank and it costs cost[i] of gas to travel from station i to its next station (i+1). You begin the journey with an empty tank at one of the gas stations. Return the minimum starting gas station’s index if you can travel around the circuit once, otherwise return -1

Problem Note

Completing the circuit means starting at i and ending up at i again.
If there exists a solution, it is guaranteed to be unique.
Both input arrays are non-empty and have the same length.
Each element in the input arrays is a non-negative integer.
Example 1

Input: 
arr[] = [1,2,3,4,5]
cost[] = [3,4,5,1,2]
Output: 3

Explanation:
Start at station 3 (index 3) and fill up with 4 unit of gas. Gas available in Tank = 0 + 4 = 4
Travel to station 4.Gas available in tank = 4 - 1 + 5 = 8
Travel to station 0.Gas available in tank = 8 - 2 + 1 = 7
Travel to station 1.Gas available in tank = 7 - 3 + 2 = 6
Travel to station 2.Gas available in tank = 6 - 4 + 3 = 5
Travel to station 3.The cost is 5.Your gas is just enough to travel back to station 3.Therefore, return 3 as the starting index.
Example 2

Input: 
arr[] = [2,3,4]
cost[] = [3,4,3]
Output: -1

Explanation:
You can't start at station 0 or 1, as there is not enough gas to travel to the next station.
Let's start at station 2 and fill up with 4 unit of gas. Gas available in tank = 0 + 4 = 4
Travel to station 0.Gas available in tank = 4 - 3 + 2 = 3
Travel to station 1.Gas available in tank = 3 - 3 + 3 = 3
You cannot travel back to station 2, as it requires 4 unit of gas but you only have 3.Therefore, you can't travel around the circuit once no matter where you start.
*/
class Solution {
public:
    int gasStation(vector<int>& a, vector<int>& b) {
    	 int n= a.size();  // size of gas n cost
       int gas=0, t=0, start=0, c=0;
       for(int i=0;i<n;i++)
       {
          gas+= a[i]; // total gas , a[i] represnts gas at each station
          t+= b[i]; //total cost, c[i] represnts cost to reach i station
          c+= a[i]-b[i]; // summation of difference gas and cost at ith position
          if(c<0)     
          {            // if sum is less than 0 , starting index is 1+i and t=0
           s=1+i;
           c=0;
          }
        }
        if(gas<t)        //if total gas required is less than cost return -1
        return -1;
        
        return start;  //finally return satrting index.
           
    }
};
