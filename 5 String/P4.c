//4. Write a program in C to count the total number of words in a string
#include <stdio.h>

int main () {
    char str[50];
    int count=0,i;
    printf("Enter String:");
    gets(str);

     for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            count++;
        }
    }
    count++;
    printf("Total number of word in string:%d\n",count);
    return 0;
}