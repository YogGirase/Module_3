//10.Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans: -5)
#include <stdio.h>
int firstlastSum(int n) {
    int lastDigit, firstDigit;
    
    lastDigit = n % 10;
    
    while (n >= 10) {
        n /= 10;
    }
    firstDigit = n;
    
    return firstDigit + lastDigit;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int sum = firstlastSum(num);
    printf("Summation of first and last digits: %d\n", sum);

    return 0;
}
