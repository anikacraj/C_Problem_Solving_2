#include<stdio.h>
int main()
{
    int n;
    printf(" enter the number ");
    scanf("%d",&n);
   int  result=fac (n);
    printf(" the factorial is :%d",result );

}
int fac (int n)
{
    if(n==1)
        return 1;
    else
        n*=fac(n-1);
}
