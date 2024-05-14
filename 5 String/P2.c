//2.Write a program in C to separate individual characters from a string.
#include <stdio.h>

int main () {
    char str[50];
    int i;

    printf("Enter String:");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c \t",str[i]);
    }
    printf("\n");

    return 0;
}