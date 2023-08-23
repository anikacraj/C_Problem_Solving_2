#include<stdio.h>
struct person
{
    char name[20] ;
    int age;
    //float salary;
};


int main()
{
    int i,n,j;
    printf("Enter number :");
    scanf("%d",&n);
    struct person person1[n];
    for(i=0;i<n;i++)
    {
        printf("\n Enter the data for person %d:",i+1);
        printf("\n enter name:");
        scanf("%s",&person1[i].name);
        printf("\n Enter age:");
        scanf("%d",&person1[i].age);
    }
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            if(person1[j].age <person1[j-1].age)
            {


                    struct person temp=person1[j];
            person1[j]=person1[j-1];
            person1[j-1]=temp;
            }

        }
    }
     for(i=0;i<n;i++)
    {
        printf("/n data for person %d:\n",i+1);

    printf("Name:%s",person1[i].name);
    printf(" \n Age:%d ",person1[i].age);
    }


}
