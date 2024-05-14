//9. Find circumference of Triangle formula : triangle = a + b + c
#include <stdio.h>
int  main(){
    int area,Circumference,a,b,c;

    printf("Enter Circumference of Triangle:");
    scanf("%d %d %d",&a,&b,&c);
    
    //formula
    Circumference = a + b + c;
    printf("Circumference of Triangle:%d", Circumference);
    return 0;

}