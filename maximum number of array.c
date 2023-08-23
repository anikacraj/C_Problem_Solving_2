#include<stdio.h>
int main()
{
    int a[10],i,n,min,max;
    printf("How many numbers :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("a[%d] :",i+1);
        scanf("%d",&a[i]);
    }
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
min=a[0];
max=a[0];
  for(i=0;i<n;i++)
    {
if(min>a[i]){
    min=a[i];

}





if(max<a[i]){
    max=a[i];
}
    }
    printf("/n The minimum number is: %d\n",min);
printf("the maximum number is :%d\n",max);



}
