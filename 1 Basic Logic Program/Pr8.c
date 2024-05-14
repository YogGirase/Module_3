//8. Find circumference of Rectangle formula : C = 2 * (length + width);
#include <stdio.h>
int  main(){
    float length,width,Circumference;

    printf("Enter Circumference of Rectangle length and width:");
    scanf("%f %f",&length,&width);

    Circumference = 2 * (length + width);
    printf("Circumference of Rectangle:%f", Circumference);
    return 0;

}