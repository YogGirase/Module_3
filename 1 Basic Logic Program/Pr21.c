//21.Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable
#include <stdio.h>

int main () {
    int num1,num2;
    // int swap;
    printf("Enter a Number1:");
    scanf("%d",&num1);

    printf("Enter a Number2:");
    scanf("%d",&num2);
    
    printf("Before swap the Number 1=%d Number 2=%d \n",num1,num2);
    // swap = num1;
    // num1 = num2;
    // num2 = swap;

     num1 = num1*num2;
    num2 = num1/num2;
    num1 = num1/num2;
    printf("After a swap the Number 1 = %d Number 2= %d",num1,num2);
    return 0;
}