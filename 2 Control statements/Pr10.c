//10.WAP to check whether a number is negative, positive or zero.
#include <stdio.h>

int main () {
    int digit;
    printf("Enter a number:");
    scanf("%d",&digit);

    if (digit > 0 )
    {
        printf("Number is positive:");
    }
    else if (digit < 0)
    {
        printf(" Number is negative:");
    }
    if (digit == 0)
    {
       printf("Number is Zero:");
    }
    
    
    
    return 0;
}