//10.Write a program in C to extract a substring from a given string
#include <stdio.h>
#include <string.h>
int main () {
    char str[50];
    char str1[50];


    printf("Enter A string:");
    gets(str);
    printf("Enter A Substring:");
    gets(str1);

    printf("Main String:%s\n",str);
    printf("Substring is:%s",strstr(str,str1));
    return 0;
}