/*16.Write a C program to read temperature in centigrade and display a suitable 
message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot*/
#include<stdio.h>
int main() {
    float tempreature;
    printf("Enter temperature in centigrade:");
    scanf("%f",&tempreature);

    if(tempreature < 0)
    {
        printf("Freezing weather\n");
    }
    else if(tempreature >= 0 && tempreature <= 10 )
    {
       printf("Very cold tempreature.\n"); 
    }
     else if(tempreature >= 10 && tempreature <= 20 )
    {
       printf(" cold tempreature.\n"); 
    }
     else if(tempreature >= 20 && tempreature <= 30 )
    {
       printf("normal tempreature.\n"); 
    }
     else if(tempreature >= 30 && tempreature <= 40 )
    {
       printf("hot tempreature.\n"); 
    }
     else if(tempreature >= 40 )
    {
       printf("Very hot tempreature.\n"); 
    }
    else 
    {
        printf("Enter valid Tempreture.\n");
    }
}