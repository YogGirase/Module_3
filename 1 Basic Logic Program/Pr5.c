//5. Find Area of Cube formula : a = 6a2

#include <stdio.h>
int  main(){
    int area;

    printf("Enter area of Cube:");
    scanf("%d",&area);
    area = 6 * area * area;
    printf("Area of Cube:%d" ,area);
    return 0;

}