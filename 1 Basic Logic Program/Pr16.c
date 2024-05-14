//16.Convert country’s name in abbreviate form
#include <stdio.h>
#include <string.h>
int main() {
    char countryname[50];
    char abbreviated[10];
    int i, j = 0;

    printf("Enter the country's name: ");
    scanf("%[^\n]", countryname);

    abbreviated[j++] = toupper(countryname[0]);
    for (i = 1; countryname[i] != '\0'; i++) {
        if (countryname[i - 1] == ' ') {
            abbreviated[j++] = toupper(countryname[i]);
        }
    }
    abbreviated[j] = '\0'; 

    printf("Abbreviated form: %s\n", abbreviated);

    return 0;
}
