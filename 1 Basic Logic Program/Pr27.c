//27.Convert days into months
#include <stdio.h>

int main () {
    float days,days_in_month,total_months;
    printf ("Enter the Days:");
    scanf("%f",&days);

    days_in_month = 365 /12;

    //calculate the days
    total_months = days / days_in_month;
    printf("Total Months:%f",total_months);
    return 0;
}