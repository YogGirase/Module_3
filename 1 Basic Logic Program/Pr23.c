//23.WAP to calculate swap 2 numbers with using of multiplication and division.
#include <stdio.h>

int main () {
    int num1,num2;
    printf("Enter a Number1:");
    scanf("%d",&num1);

    printf("Enter a Number2:");
    scanf("%d",&num2);
    
    printf("Before swap the Number 1=%d Number 2=%d \n",num1,num2);
    num1 = num1*num2;
    num2 = num1/num2;
    num1 = num1/num2;
    printf("After a swap the Number 1 = %d Number 2= %d",num1,num2);
    return 0;
}