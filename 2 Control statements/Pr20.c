//20.write a program in C to read any Month Number in integer and display the number of days for this month.
#include <stdio.h>

int main () {
    int month_number;
    
    printf("Enter the month number (1-12): ");
    scanf("%d", &month_number);

    switch (month_number)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Number of days in %dth month: 31\n",month_number);
            break;
    case 4: case 6: case 9: case 11:
            printf("Number of days in %dth month: 30\n",month_number);
            break;
    case 2:
            printf("Number of days in 2nd month: 28 or 29\n");
            break;
        default:
            printf("Invalid month number\n");
            break;
    }
    return 0;
}