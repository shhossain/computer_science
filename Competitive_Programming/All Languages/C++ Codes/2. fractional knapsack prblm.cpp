/*
Given the weights and values of n items, we need to put these items in a knapsack of capacity "capacity". Write a program to get the maximum total value in the knapsack.

Problem Note

Items are given as (value, weight) pairs i.e. (val, wt).
Example 1

Input: Items[] = [ [60, 10], [100, 20], [120, 30] ] 
Knapsack Capacity(capacity) = 50
Output: Maximum possible value = 240  
Explanation:  By taking full items of 10 kg, 20 kg and 2/3rd of last item of 30 kg. Total value = 60 + 100 + 120*2/3 = 240
*/



struct Item{
  int value;
  int weight;
 };
bool comp(struct Item a, struct Item b)
{
  double ratio1= (double) a.value/a.weight; ratio of value/wt means profit ratio
  double ratio2= (double) b.value/b.weight; 
  return r1>r2
 }
 
 class Solution{
  public:
   int maxprft(vector<int> a[], int W)
   {
     int n= a.size();
     sort(a,a+n,comp);  //sort in decreasing order of profit
     int cw=0;// current weight
     int pft=0; // profit 
     for(int i=0;i<n;i++)
     {
        if(cw + a[i].weight <= W)
        {
          cw+= a[i].weight;
          p+= a[i].value;
        }
        else
        {
          int remain = W - cw;  //remaining wt 
          p+= a[i].value * ((double) remain/ a[i].weight);
         }
      }  
      return p;
  }        
};
  
