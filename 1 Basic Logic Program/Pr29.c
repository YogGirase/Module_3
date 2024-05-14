//29.Convert minutes into seconds and hours
#include <stdio.h>

int main () {
    float minutes,hours,second;
    printf ("Enter the Minutes:");
    scanf("%f",&minutes);
    // minutes = (minutes = 60 );
    hours = ( minutes / 60);
    second = (60 * minutes );

    printf("Total Hours:%.2f and Total Second:%f",hours,second);
    return 0;
}