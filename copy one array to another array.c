#include<stdio.h>
int main()
{
    int i;
    int a[10]={2,4,5,6,7,8,9},b[10];
printf("First array :");
    for(i=0;i<7;i++)
    {
        printf(" %d",a[i]);
    }

     for(i=0;i<7;i++)
    {
    b[i]=a[i];
    }
    printf("\n 2nd array:");
     for(i=0;i<7;i++)
    {
        printf(" %d",b[i]);
    }

}
