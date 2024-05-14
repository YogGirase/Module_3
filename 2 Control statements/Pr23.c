//23.Accept month number and display month name
#include <stdio.h>

int main () {
int month_number;
    printf("Enter the month number (1-12): ");
    scanf("%d", &month_number);

    switch (month_number) {
        case 1:
            printf("Month 1: January\n");
            break;
        case 2:
            printf("Month 2: February\n");
            break;
        case 3:
            printf("Month 3: March\n");
            break;
        case 4:
            printf("Month 4: April\n");
            break;
        case 5:
            printf("Month 5: May\n");
            break;
        case 6:
            printf("Month 6: June\n");
            break;
        case 7:
            printf("Month 7: July\n");
            break;
        case 8:
            printf("Month 8: August\n");
            break;
        case 9:
            printf("Month 9: September\n");
            break;
        case 10:
            printf("Month 10: October\n");
            break;
        case 11:
            printf("Month 11: November\n");
            break;
        case 12:
            printf("Month 12: December\n");
            break;
        default:
            printf("Invalid month number\n");
            break;
    }

    return 0;
}