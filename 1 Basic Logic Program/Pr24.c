//24.Accept 5 employees name and salary and count average and total salary
#include <stdio.h>

int main () {
    char EMP1,EMP2,EMP3,EMP4,EMP5;
    int salary_1,salary_2,salary_3,salary_4,salary_5,total_salary,avarage_salary;

    printf("Enter Employee Name:");
    scanf("%c %c %c %c %c",&EMP1,&EMP2,&EMP3,&EMP4,&EMP5);

    printf("Enter Employee salary:");
    scanf("%d %d %d %d %d", &salary_1,&salary_2,&salary_3,&salary_4,&salary_5);

    // Total Salary
    total_salary = salary_1 + salary_2 + salary_3 + salary_4 + salary_5;
    printf("Total salary of Employee:%d \n",total_salary);

    //Avarage of salary
    avarage_salary = total_salary / 5;
    printf("Avarage salary of Employee:%d",avarage_salary);
    return 0;
}