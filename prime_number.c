#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("enter the number ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
             break;
        }
    }
    if(count==0)
    printf("This is prime number");
    else
        printf("not prime number ");

}
