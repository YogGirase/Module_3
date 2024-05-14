/*9.Write a program of structure employee that provides the following
a. information -print and display empno, empname, address
andage
b. Write a program of structure for five employee that 
provides the following information -print and display
empno, empname, address andage */
#include <stdio.h>
struct employee
{
    int empno;
    char empname[20];
    char address[50];
    int age;
};

int main () {
    struct employee emp1,emp2,emp3,emp4,emp5;
    printf("Enter Employee Name:");
    scanf("%s",&emp1.empname);
    printf("Enter a Employee no:");
    scanf("%d",&emp1.empno);
    printf("Enter Employee Address:");
    scanf("%s",&emp1.address);
    printf("Enter a Employee age:");
    scanf("%d",&emp1.age);
    printf("Enter Employee Name:");
    scanf("%s",&emp2.empname);
    printf("Enter a Employee no:");
    scanf("%d",&emp2.empno);
    printf("Enter Employee Address:");
    scanf("%s",&emp2.address);
    printf("Enter a Employee age:");
    scanf("%d",&emp2.age);
    printf("Enter Employee Name:");
    scanf("%s",&emp3.empname);
    printf("Enter a Employee no:");
    scanf("%d",&emp3.empno);
    printf("Enter Employee Address:");
    scanf("%s",&emp3.address);
    printf("Enter a Employee age:");
    scanf("%d",&emp3.age);
    printf("Enter Employee Name:");
    scanf("%s",&emp4.empname);
    printf("Enter a Employee no:");
    scanf("%d",&emp4.empno);
    printf("Enter Employee Address:");
    scanf("%s",&emp4.address);
    printf("Enter a Employee age:");
    scanf("%d",&emp4.age);
    printf("Enter Employee Name:");
    scanf("%s",&emp5.empname);
    printf("Enter a Employee no:");
    scanf("%d",&emp5.empno);
    printf("Enter Employee Address:");
    scanf("%s",&emp5.address);
    printf("Enter a Employee age:");
    scanf("%d",&emp5.age);

    printf("\n---Employee Details---:");

    printf("\n---Employee1 Details---");
    printf("\nEmployee Name:%s",emp1.empname);
    printf("\nEmployee No:%d",emp1.empno);
    printf("\nEmployee Address:%s",emp1.address);
    printf("\nEmployee Age:%d",emp1.age);
    printf("\n---Employee2 Details---");
    printf("\nEmployee Name:%s",emp2.empname);
    printf("\nEmployee No:%d",emp2.empno);
    printf("\nEmployee Address:%s",emp2.address);
    printf("\nEmployee Age:%d",emp2.age);
    printf("\n---Employee3 Details---");
    printf("\nEmployee Name:%s",emp3.empname);
    printf("\nEmployee No:%d",emp3.empno);
    printf("\nEmployee Address:%s",emp3.address);
    printf("\nEmployee Age:%d",emp3.age);
    printf("\n---Employee4 Details---");
    printf("\nEmployee Name:%s",emp4.empname);
    printf("\nEmployee No:%d",emp4.empno);
    printf("\nEmployee Address:%s",emp4.address);
    printf("\nEmployee Age:%d",emp4.age);
    printf("\n---Employee5 Details---");
    printf("\nEmployee Name:%s",emp5.empname);
    printf("\nEmployee No:%d",emp5.empno);
    printf("\nEmployee Address:%s",emp5.address);
    printf("\nEmployee Age:%d",emp5.age);
    return 0;
}