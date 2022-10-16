#include<stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void bubble_sort(int a[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
             {
               swap(&a[j],&a[j+1]);
             }
        }
    }
}
int  main()
{
    int arr[20];
    int n,i,j,temp;
    printf("enter the size of array :");
    scanf("%d",&n);

    printf("enter elements in the array\n");
    for(i=0;i<n;i++)
       scanf("%d",&arr[i]);

    bubble_sort(arr,n);

    printf("the sorted array is as follows\n");
    for(i=0;i<n;i++)
       printf("%d ",arr[i]);
    
    return 0;
}