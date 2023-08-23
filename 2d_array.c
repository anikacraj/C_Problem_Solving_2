#include<stdio.h>
int main()
{
    int a[10][10],i,j,r,c,b[10][10],d[10][10],e[10][10];
    printf(" how many row:");
scanf("%d",&r);
    printf(" how many col:");
  scanf("%d",&c);
  printf(" Given value for A matrix :\n");
  for(i=0;i<r;i++)
  {
      for(j=0;j<c;j++)
      {
          printf(" a[%d][%d]:",i,j);
          scanf("%d",&a[i][j]);
      }
  }
  printf("\n print array :\n");
  for(i=0;i<r;i++)
  {
      for(j=0;j<c;j++)
      {

       printf("%d ",a[i][j]);
      }
  }
   printf(" \n Given value for B matrix :\n");
  for(i=0;i<r;i++)
  {
      for(j=0;j<c;j++)
      {
          printf(" b[%d][%d]:",i,j);
          scanf("%d",&b[i][j]);
      }
  }
  printf("\n print array :\n");
  for(i=0;i<r;i++)
  {
      for(j=0;j<c;j++)
      {

       printf("%d ",b[i][j]);
      }
  }
  printf("\n After sum:\n");
    for(i=0;i<r;i++)
  {
      for(j=0;j<c;j++)
      {
          d[i][j]=a[i][j]+b[i][j];
      }
  }
   for(i=0;i<r;i++)
  {
      for(j=0;j<c;j++)
      {

       printf("%d ",d[i][j]);
      }
  }
  printf("\n After sub:\n");
    for(i=0;i<r;i++)
  {
      for(j=0;j<c;j++)
      {
          e[i][j]=a[i][j]-b[i][j];
      }
  }
   for(i=0;i<r;i++)
  {
      for(j=0;j<c;j++)
      {

       printf("%d ",e[i][j]);
      }
  }




}
