//5. Write a program in C to compare two strings without using string library functions.
#include <stdio.h>

int main () {
    char str1[50];
    char str2[50];
    int len=0,i;
    printf("Enter String1:");
    gets(str1);
    printf("Enter String2:");
    gets(str2);

    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            len = 1;
            break;
        }
    }
    if (len == 0 && str1[i] == '\0' && str2[i] == '\0') {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }
    

    return 0;
}