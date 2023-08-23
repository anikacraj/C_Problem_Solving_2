#include<stdio.h>
int main()
{
    int a=0,b=1,n,count=0,fibo;
    printf("enter the range:");
    scanf("%d",&n);
    while(count<n)
    {
    if(count<=1){
        fibo=count;
    }
    else
    {
        fibo=a+b;
        a=b;
        b=fibo;
    }




    printf(" %d",fibo);
    count++;
}
}
