//17.Calculate person’s insurance premium based on salary
#include <stdio.h>

int main ()
 {
    float salary,percentage,primium;
    printf("Enter a Salary:");
    scanf("%f",&salary);
    printf("Enter a insurence percentage:");
    scanf("%f",&percentage);
    //formula:
    primium = (salary*percentage/100);
    printf("Insurence primium is: %f\n",primium);
    return 0;
}