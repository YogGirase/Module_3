//12.WAP to accept 5 numbers from user and display in reverse order using for loop and array
#include <stdio.h>

int main () {
    int num[5];
    int i;
    printf("Enter Five Numbers...\n");
    for ( i = 0; i < 5; i++)
    {
        printf("Number %d:",i + 1);
        scanf("%d",&num[i]);
    }
    printf("Reverse numbers...\n");
    for ( i = 4; i >= 0; i--)
    {
        printf("%d\n",num[i]);
    }
    
    return 0;
}