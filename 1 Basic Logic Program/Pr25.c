//25.Accept 5 expense from user and find average of expense
#include <stdio.h>

int main () {
    float expenses_1,expenses_2,expenses_3,expenses_4,expenses_5,total_expenses,avarage_expenses;

    printf("Enter User Expenses:");
    scanf("%f %f %f %f %f", &expenses_1,&expenses_2,&expenses_3,&expenses_4,&expenses_5);

    // Total expenses
    total_expenses = expenses_1 + expenses_2 + expenses_3 + expenses_4 + expenses_5;
    printf("Total expenses of Employee:%f \n",total_expenses);

    //Avarage of expenses
    avarage_expenses = total_expenses / 5;
    printf("Avarage expenses of Employee:%f",avarage_expenses);
    return 0;
}