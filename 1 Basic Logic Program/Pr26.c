//26.Convert temperature Fahrenheit to Celsius
#include <stdio.h>

int main () 
{
    float fahrenheit,tempreture_celsius;
    printf("Enter A Fehrenteit Tempreture:");
    scanf("%f",&fahrenheit);

    //calculate the tempreture::
    tempreture_celsius = (fahrenheit - 32 ) * 5 / 9;
    printf("Tempreture is:%.2f celsius",tempreture_celsius);

    return 0;
}