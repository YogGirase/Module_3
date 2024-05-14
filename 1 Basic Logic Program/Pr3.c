//3. WAP to Find Area And Circumference of Circle
#include <stdio.h>
int  main(){
    float Circumference,area,radius;
    float pi = 3.14;
    printf("Enter Circle Radius:");
    scanf("%f",&radius);
    Circumference = 2 * pi * radius;
    printf("Circumference  of circle:%f" ,Circumference);

}