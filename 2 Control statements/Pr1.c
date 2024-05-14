//1.Write a C program to accept two integers and check whether they are equal or not
#include <stdio.h>

int main () {
    int num1,num2;
    printf("Enter Numbers:");
    scanf("%d %d",&num1,&num2);

    if (num1 == num2)
    {
        printf("Both numbers are Equal:");
    }
    else{
        printf("Both numbers are not Equal:");
    }
    
    return 0;
}