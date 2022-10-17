#include <stdio.h>
int main()
{
  int m, n, p, q, c, d, k, sum = 0;
  int fir[10][10], sec[10][10], mlty[10][10];
 
  printf("ENTER THE ROW AND COLOMN \n");
  scanf("%d%d",&m,&n);
  printf("\n FIRST MATRIX NEED TO ONE WITH ONE SPACE AND AFTER THREE WITH ENTER \n");
  for (c = 0; c < m; c++){
    for (d = 0; d < n; d++){
      scanf("%d", &fir[c][d]);
  }
}
 printf("\n ENTER THE ROW AND COLOMN:\n");
  scanf("%d%d", &p, &q);
  if (n != p)
    printf("\n FOR MULTYPLY NEED TO N=P \n");
  else
  {
    printf("\n SECOND MATRIX NEED TO ONE WITH ONE SPACE AND AFTER THREE WITH ENTER \n");
   for (c = 0; c < p; c++){
      for (d = 0; d < q; d++){
        scanf("%d", &sec[c][d]);
}
}
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + fir[c][k]*sec[k][d];
        }
 
        mlty[c][d] = sum;
        sum = 0;
      }
    }
 
    printf("THE MULTYPLY IS::\n");
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("[%d\t]", mlty[c][d]);
 
      printf("\n");
    }
  }
 
  return 0;
}
