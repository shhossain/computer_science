#include <stdio.h>
int main()
{
    int num[100], temp, numLen;
    printf("Enter the array length: ");
    scanf("%d", &numLen);
    for (int i = 0; i < numLen; i++)
    {
        printf("Enter number for array %d: ", i);
        scanf("%d", &num[i]);
    }
    for (int j = 0; j < numLen; j++)
    {
        for (int k = j + 1; k < numLen; k++)
        {
            if (num[j] > num[k])
            {
                temp = num[j];
                num[j] = num[k];
                num[k] = temp;
            }
        }
    }
    printf("The sorted array is: \n");
    for (int l = 0; l < numLen; l++)
    {
        printf("%d \n", num[l]);
    }
}