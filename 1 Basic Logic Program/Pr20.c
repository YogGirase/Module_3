/*20.Accept monthly salary from the user and deduct 10% insurance premium, 
10% loan installment find out of remaining salary.*/
#include <stdio.h>

int main ()
 {
    float salary,primium_insurance,loan_installment,remaining_salary;
    printf("Enter a Salary:");
    scanf("%f",&salary);
    printf("Enter a primium insurence:");
    scanf("%f",&primium_insurance);
    printf("Enter a loan interest");
    scanf("%f",&loan_installment);
    //Insert the formula:
    remaining_salary = salary - 0.1 *(primium_insurance + loan_installment);
    printf("Insurence primium is: %f",remaining_salary);
    return 0;
}