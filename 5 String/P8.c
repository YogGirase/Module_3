//8. Write a program in C to count the total number of vowels or consonants in a string.
#include <stdio.h>

int main () {
    char str[50];
    int vowel=0,consonants=0,i;
    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] !='\0'; i++)
    { 
        char ch = tolower(str[i]);
         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowel++;
            } else {
                consonants++;
            }
    }
    printf("Total number of vowels: %d\n", vowel);
    printf("Total number of consonants: %d\n", consonants);
    
    return 0;
}