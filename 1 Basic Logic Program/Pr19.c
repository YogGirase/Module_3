// 19.Calculate compound interest
#include <stdio.h>

int main() {
    float principal, rate, time, compoundInterest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter interest rate (per year): ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);
    
    //formula
    compoundInterest = principal * (pow((1 + rate / 100), time) - 1);

    printf("Compound interest: %.2f\n", compoundInterest);

    return 0;
}
