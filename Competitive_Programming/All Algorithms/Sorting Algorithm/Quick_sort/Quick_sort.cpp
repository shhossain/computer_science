#include<bits/stdc++.h>
using namespace std;

void swap(int arr[] ,int i , int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int participation(int arr[] , int l , int r){
    int pivot = arr[r];
    int i = l-1;

    for (int j = l; j < r; j++)
    {
       if (arr[j]<pivot)
       {
           i++;
           swap(arr , i , j);
       }
       
    }

    swap(arr , i+1 , r);
    return i+1;
}

void QuickSort( int arr[] , int l , int r){
    if(l<r){
        int pi = participation(arr , l , r);
        QuickSort(arr , l , pi-1);
        QuickSort(arr , pi + 1 , r);
    }
}

int main() {
    int n;
    cin>>n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
       cin>>arr[i];
   }
   
   QuickSort(arr , 0 , n-1);
   for (int i = 0; i < n; i++)
   {
       cout<<arr[i]<<" ";
   }
   
return 0;
}