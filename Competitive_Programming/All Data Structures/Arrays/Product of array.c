#include<stdio.h>;

int main(){
    int arr[25],n, product=1;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("\n Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        product = product*arr[i];
    }
    printf("Product is %d",product);
}