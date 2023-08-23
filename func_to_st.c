#include<stdio.h>
struct person
{
    char name[100];
    int age;
    float salary;
};
int display(struct person p)
{
    printf("\n name:%s",p.name);
    printf("\n age:%d",p.age);
    printf("\n salary:%.2f",p.salary);
}

int main()
{
    struct person person1,person2;

 strcpy(person1.name,"Anik Chowdhury");
 person1.age=30;
 person1.salary=200.345;
 display(person1);
strcpy(person2.name,"Ritu Battacherjee");
 person2.age=28;
 person2.salary=140.365;
display(person2);
}
