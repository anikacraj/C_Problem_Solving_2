#include<stdio.h>
int main()
{
    int a[]={3,4,2,5,6,78,9};
    int i,value=8;
    int pos=-1;
    for(i=0;i<7;i++)
    {
        if(value==a[i])
        {
            pos=i+1;
            break;
        }

    }
     if(pos==-1)
       {
    printf("not found");
       }
       else

    printf("Found at %d",pos);
}
