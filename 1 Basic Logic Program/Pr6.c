//6. Find area of Triangle Formula : A = 1/2 × b × h
#include <stdio.h>
int  main(){
    float area,breath,hight;

    printf("Enter area of Triangle:");
    scanf("%f %f",&breath,&hight);
    area = 0.5 * breath * hight;
    printf("Area of Triangle:%f" ,area);
    return 0;

}