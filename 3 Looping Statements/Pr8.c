//8.Write a program to find out the max from given number (E.g., No: -1562Max number is 6)

#include <stdio.h>

int main () {
    int digit,num,max_digit=0;
    
    printf("enter a value:");
    scanf("%d",&num);

    while (num > 0) {
        digit = num % 10;
        if (digit > max_digit) {
            max_digit = digit;
        }
        num /= 10;
    }
    printf("Max number is: %d\n",max_digit);
    
    return 0;
}

