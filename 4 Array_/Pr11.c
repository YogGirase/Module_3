//11.WAP to perform Palindrome number using for loop and function
#include <stdio.h>

// create function
int Palindrome(int num) {
    int reverse = 0, rem, originalNum;
    originalNum = num;


    for (; num != 0; num /= 10) {
        rem = num % 10;
        reverse = reverse * 10 + rem;
    }

    
    if (originalNum == reverse)
        return 1; 
    else
        return 0; 
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    
    if (Palindrome(number))
        printf("%d is a palindrome number.\n", number);
    else
        printf("%d is not a palindrome number.\n", number);

    return 0;
}
