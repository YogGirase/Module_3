/*3.WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers*/
#include <stdio.h>

int main () {
    int num,even=0,odd=0,sum,sum_odd;

    printf("Enter a 10 numbers:");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&num);
    
        if (num % 2 == 0) {
            even++;
            sum+=num;// c. Sum of even numbers
    }
        else {
            odd++;
            sum_odd +=num;
    }
    
    }
    printf("Number of even numbers: %d \n", even);
    printf("Sum of even numbers: %d \n", sum);

    printf("Number of odd numbers: %d \n", odd);
    printf("Sum of odd numbers:%d", sum_odd);
    return 0;
}