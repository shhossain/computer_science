//C program to merge 2 arrays of same size in descending order
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[10],b[10],c[10],s1,s2,s3,i,j,k;
    printf("Enter the size of array 1 and array 2:\n");
    scanf("%d %d",&s1,&s2);
    printf("Enter the elements of array 1:\n");
    for(i=0;i<s1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of array 2:\n");
    for(i=0;i<s2;i++)
    {
        scanf("%d",&b[i]);
    }
    s3=s1+s2;
    for(i=0;i<s1;i++)
    {
        c[i]=a[i];
    }
        for(j=0;j<s2;j++)
        {
            c[i]=b[j];
            i++;
        }

    //sort the array in descending order
    for(i=0;i<s3;i++)
    {
        for(k=0;k<s3-1;k++)
        {
            if(c[k]<=c[k+1])
            {
                j=c[k+1];
                c[k+1]=c[k];
                c[k]=j;
            }
        }
    }
    printf("The merged array is:");
    for(i=0;i<s3;i++)
    {

        printf("%d ",c[i]);
    }
    return 0;

}
