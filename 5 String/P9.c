//9. Write a program in C to find the maximum number of characters in a string.
#include <stdio.h>
#include <string.h>

#define MAX_CHAR 200

char Maxnumchar(char *str) {
    int freq[ MAX_CHAR] = {0};
    int maxFreq = 0;
    char maxChar;

    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    for (int i = 0; i <  MAX_CHAR; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }

    return maxChar;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    char maxChar = Maxnumchar(str);

    printf("Maximum occurring character in the string: %s is %c", str, maxChar);

    return 0;
}
