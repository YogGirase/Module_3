//12.Write a program in C to find the number of times a given word 'is' appears in the given string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int count = 0;

    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; i < strlen(str); i++) {
        if (strncmp(&str[i], "is", 2) == 0) {
            count++;
        }
    }

    if (count > 0) {
        printf("The word 'is' appears %d times in the given string.\n", count);
    } else {
        printf("The word 'is' is not found in the given string.\n");
    }

    return 0;
}
