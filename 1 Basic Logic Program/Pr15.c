//15.Convert school’s name in abbreviated form

#include <stdio.h>

int main() {
    char schoolName[50];
    char abbreviated[20];
    int i, j = 0;

    printf("Enter the school's name: ");
    scanf("%[^\n]", schoolName);

    abbreviated[j++] = schoolName[0];
    for (i = 1; schoolName[i] != '\0'; i++) {
        if (schoolName[i - 1] == ' ') {
            abbreviated[j++] = schoolName[i];
        }
    }
    abbreviated[j] = '\0'; 

    printf("Abbreviated form: %s\n", abbreviated);

    return 0;
}
