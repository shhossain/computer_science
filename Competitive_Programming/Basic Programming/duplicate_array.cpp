#include<stdio.h>
int main()
{
    int i,j,k=0,n;

    int a[10],b[10];
    printf("ENTER THE MARKS OF ARRAY::\n");
    for(i=0;i<10;i++){
     scanf("%d",&a[i]);
 }
    for(i=0;i<10;i++)
    {
        for(j=0;j<k;j++)
        {
            if(b[j]==a[i])
             break;
        }
        if(j==k)
        {
            b[k]=a[i];
            k++;
        }
    }
    printf("ACCURATE ARRAY IS HERE::\n");
    for(i=0;i<k;i++)
      printf("%d ",b[i]);
    return 0;
}
