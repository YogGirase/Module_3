//22.WAP to input the week number and print week day.
#include <stdio.h>

int main () {
    int week_number;

    printf("Enter the week number (1-7): ");
    scanf("%d", &week_number);

    switch (week_number) {
        case 1:
            printf("Weekday 1: Monday\n");
            break;
        case 2:
            printf("Weekday 2: Tuesday\n");
            break;
        case 3:
            printf("Weekday 3: Wednesday\n");
            break;
        case 4:
            printf("Weekday 4: Thursday\n");
            break;
        case 5:
            printf("Weekday 5: Friday\n");
            break;
        case 6:
            printf("Weekday 6: Saturday\n");
            break;
        case 7:
            printf("Weekday 7: Sunday\n");
            break;
        default:
            printf("Invalid week number\n");
            break;
    }

    return 0;
}