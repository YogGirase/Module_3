//7. Find area of Rectangle Formula : A=wl
#include <stdio.h>
int  main(){
    float area,width,lenght;
    
    printf("Enter area of Rectangle:");
    scanf("%f %f",&width,&lenght);
    
    area = width * lenght;
    printf("Area of Rectangle:%f" ,area);
    return 0;

}