#include<stdio.h>
int display(int a[])
{
    int i=0;
    int max=a[0];
    int min=a[0];
    for(i=0;i<5;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("/n The minimum number is: %d\n",min);
printf("the maximum number is :%d\n",max);

}

int main()
{
    int a[]={3,2,10,5,6};
    display(a);
}
