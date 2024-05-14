//11.Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa
#include <stdio.h>

int main () {
    char str[50];
    
    printf("Enter A Sentence:");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a';
        }
    }
    printf("Modified sentence: %s\n", str);
    return 0;
}