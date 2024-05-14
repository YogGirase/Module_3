//3.Write a program in C to print individual characters of a string in reverse order
#include <stdio.h>

int main () {
    char str[50];
    int len=0,i;
    printf("Enter string:");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        len++;
    }
    printf("Reverse String:\n");
    for (i = len- 1; i >= 0; i--)
    {
        printf("%c ",str[i]);
    }
    printf("\n");
    return 0;
}