#include<stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void selection_sort(int a[],int f,int l)
{
    if(f-1>=l)
    return;

    int mp=f;
    int i;
    for(i=f+1;i<l;i++)
    {
        if(a[mp]>a[i])
          mp=i;
    }
    
    swap(&a[mp],&a[f]);

    selection_sort(a,f+1,l);
}
int main()
{
    int arr[15];
    int n;
    int i;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    printf("Enter elements in the array\n");
    for(i=0;i<n;i++)
       scanf("%d",&arr[i]);

    selection_sort(arr,0,n);
    printf("array in sorted order is as follows\n");
    for(i=0;i<n;i++)
       printf("%d ",arr[i]);

    return 0;
}