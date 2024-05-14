//28.Convert years into days and months
#include <stdio.h>

int main () {
    float year,months_in_year,days_in_year;
    printf ("Enter the Year:");
    scanf("%f",&year);

    months_in_year = ( 12 *year);
    days_in_year = (365 *year );

    printf("Total Months:%f and Total Days:%f",months_in_year,days_in_year);
    return 0;
}