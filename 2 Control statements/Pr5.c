//5.Check Number Is Positive or Negative
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
    else{
        printf("please enter valid number:");
    }
    
    
    return 0;
}