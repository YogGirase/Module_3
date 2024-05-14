//18.Calculate person’s Annual salary
#include <stdio.h>

int main () {
    int Annual_salary,Monthly_salary;
    printf("Enter Person monthly salary:");
    scanf("%d",&Monthly_salary);

    //Calculate the annual salary using formula:
    Annual_salary = Monthly_salary*12;
    printf("Person annual salary is:%d\n",Annual_salary);
    return 0;
}