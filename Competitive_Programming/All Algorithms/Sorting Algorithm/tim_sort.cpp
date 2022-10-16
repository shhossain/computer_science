// Tim Sort in CPP
#include<bits/stdc++.h>
using namespace std;
// run count define
const int RUN = 32;
 
// In Tim Sort First Run insertion sort and the merge these insertion sort together
void insertionSort(int arr[], int left, int right)
{
    for (int i = left + 1; i <= right; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= left && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
 
// Merge function merges the sorted runs
void mergeSorted(int arr[], int l, int m, int r)
{
    int len1 = m - l + 1, len2 = r - m;
    int left[len1], right[len2];
    for (int i = 0; i < len1; i++)
        left[i] = arr[l + i];
    for (int i = 0; i < len2; i++)
        right[i] = arr[m + 1 + i];
 
    int i = 0;
    int j = 0;
    int k = l;
 
    while (i < len1 && j < len2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < len1)
    {
        arr[k] = left[i];
        k++;
        i++;
    }

    while (j < len2)
    {
        arr[k] = right[j];
        k++;
        j++;
    }
}
 

// Tim Sort function
void timSort(int arr[], int n)
{
    for (int i = 0; i < n; i+=RUN)
        insertionSort(arr, i, min((i+RUN-1),(n-1)));
 
    for (int size = RUN; size < n;size = 2*size)
    {
         
        for (int left = 0; left < n;left += 2*size)
        {
             
            int mid = left + size - 1;
            int right = min((left + 2*size - 1),(n-1));

              if(mid < right)
                mergeSorted(arr, left, mid, right);
        }
    }
}
 
// Print Sorted array to console
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d  ", arr[i]);
    printf("\n");
}
 
// Main function
int main()
{
    int arr[] = {-35, 0, -23, 45, 50, -11, 1, 23};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Given Array is\n");
    printArray(arr, n);
 
    // Call tim sort function
    timSort(arr, n);
 
    printf("After Sorting Array is\n");
    printArray(arr, n);
    return 0;
}