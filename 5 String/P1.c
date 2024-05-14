// 1.Write a program in C to find the length of a string without using library functions
#include <stdio.h>

int main () {
    char str[50];
    int i,len=0;
    printf("Enter String:");
    gets(str);
    for (int i = 0;str[i]!='\0'; i++)
    {
        len++;
    }
    printf("Lenght of given String:%d",len);
    return 0;
}