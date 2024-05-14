//10.find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include <stdio.h>
int  main(){
    float area,width,hight,lenght;

    printf("Enter Area of reactangle:");
    scanf("%f %f %f",&width,&hight,&lenght);

    //Prims Formula
    area = 2 * width * lenght + 2 * hight * lenght + 2 * hight * lenght;
    printf("Area of reactangle in prims:%f", area);
    return 0;

}