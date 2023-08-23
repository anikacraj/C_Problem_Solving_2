#include<stdio.h>
struct person
{
    char name[100];
    int age;
    float salary;
};
int main()
{
    struct person person1,person2;


 person1.age=30;
 person1.salary=200.345;

 printf("%d",person1.age);
 printf("\n %.2f",person1.salary);

person2.age=40;
 person2.salary=200.365;

 printf("\n %d",person2.age);
 printf("\n %.2f",person2.salary);

}
