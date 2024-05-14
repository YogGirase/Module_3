//12.Accept number of students from user. I need to give 5 apples to each student. How many apples are required?

#include <stdio.h>
int  main(){
    int Student,total_number;

    printf("Enter Number of students:");
    scanf("%d",&Student);

    //Formula
    total_number = 5 * Student;
    printf("Total number of apples:%d", total_number);
    return 0;

}