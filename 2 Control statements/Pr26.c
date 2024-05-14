/*26.WAP to show
i. Monday to Sunday using switch case
ii. Vowel or Consonant using switch case
*/
#include <stdio.h>

int main () {
    int day;
    char ch;


    printf("Enter a day:");
    scanf("%d",&day);

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day number\n");
            break;
    }

    printf("Enter a character: ");
    scanf(" %c", &ch);

     switch (ch) {
        case 'a': case 'A':
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
            printf("Vowel\n");
            break;
        default:
            printf("Consonant\n");
            break;
    }
    return 0;
}