//14.WAP to accept 5 numbers from user and check entered number is even or odd using of array 
#include <stdio.h>

int main () {
    int num[5];
    int i;

    printf("Enter 5 Numbers:\n");
    for ( i = 0; i < 5; i++)
    {
        printf("Number %d:",i + 1);
        scanf("%d",&num[i]);
    }

    for ( i = 0; i < 5; i++)
    {
    if (num[i] % 2 == 0)
    {
        printf("Even Numbers:%d\n",num[i]);
    }
    else {
        printf("Odd Numbers:%d\n",num[i]);
    }
    }
    
    return 0;
}