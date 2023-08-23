#include<stdio.h>
struct person
{
    char name[100];
    int age;
    float salary;
};
struct person person1,person2,person3,person5;
struct person person4={24,82658.456};
int main()
{
    printf("Enter Data for person1:\n");
   printf("name :");
    scanf("%s",&person1.name);
    printf("Age :");
    scanf("%d",&person1.age);
     printf("salary:");
    scanf("%f",&person1.salary);

     printf("Enter Data for person2:\n");
    printf("Age :");
    scanf("%d",&person2.age);
     printf("salary:");
    scanf("%f",&person2.salary);

      printf("Enter Data for person3:\n");
    printf("Age :");
    scanf("%d",&person3.age);
     printf("salary:");
    scanf("%f",&person3.salary);

    printf("\n details for person 1:\n");
    printf("name:%s",person1.name);
    printf("age=%d\n",person1.age);
    printf("salary=%.2f\n",person1.salary);

    printf("\n details for person 2:\n");
    printf("age=%d\n",person2.age);
    printf("salary=%.2f\n",person2.salary);

    printf("\n details for person 3:\n");
    printf("age=%d\n",person3.age);
    printf("salary=%.2f\n",person3.salary);

     printf("\n details for person 4:\n");
    printf("age=%d\n",person4.age);
    printf("salary=%.2f\n",person4.salary);

    person5=person2;
     printf("\n details for person 5:\n");
    printf("age=%d\n",person5.age);
    printf("salary=%.2f\n",person5.salary);

    if(person1.age==person2.age==person3.age ){
        printf("Equal\n");
    }
    else
        printf("not equal");


}


