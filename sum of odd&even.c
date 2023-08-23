#include<stdio.h>
int main()
{
    int a[]={3,4,5,6,7,8,9};
    int sum1=0;
    int sum2=0;
    int i;
    for(i=0;i<7;i++)
    {
        if(a[i]%2==0)
        {
            sum1=sum1+a[i];
        }
        else
            sum2=sum2+a[i];
    }
    printf("Sum of even number =%d",sum1);
    printf("\nsum of odd number =%d",sum2);


}
