//7. Write a program in C to copy one string to another string.
#include <stdio.h>

int main () {
    char str[50],dupli[50];
    int i;
    printf("Enter string:");
    gets(str);
    for (i = 0;str[i] != '\0'; i++) {
        dupli[i] = str[i];
    }
    dupli[i] = '\0';
    printf("Main String:%s\n",str);
    printf("Copied String:%s",dupli);
    
    return 0;
}