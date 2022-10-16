#include<bits/stdc++.h>
using namespace std::chrono;
using namespace std;
int main() {
// swapping 
// for ith itteration cheak till n-i
  int n;
  cin >>n;

  int arr[n];

  for (int i = 0; i < n; i++)
  {
      arr[i]=rand();
  }
  auto start = high_resolution_clock::now();
  int count = 1;

  while (count < n){
      for (int i = 0; i < n-count; i++)
      {
          if (arr[i]>arr[i+1])
          {
              int temp = arr[i];
              arr[i]=arr[i+1];
              arr[i+1]=temp;
          }
          
      }
      count++;
  }
  
   for (int i = 0; i < n; i++)
   {
       cout<<arr[i]<<",";
   }
    auto stop = high_resolution_clock::now();
    
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;
    cout << duration.count() / 1E6 << " seconds \n\n";
//    #max element comes up as like a bubble in every itterations
   

return 0;
}