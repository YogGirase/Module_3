//17.Write a C program to check whether a triangle can be formed with the given values for the angles.
#include<stdio.h>
int main() {
    int angle1,angle2,angle3;
    printf("Enter a three angle of triangle:");
    scanf("%d %d %d",&angle1,&angle2,&angle2);
    int sum = angle1 + angle2 + angle3;
   
    if(sum == 180)
    {
        printf("triangle can be formed with the given values for the angles\n");
}
else{
    printf("triangle can not be formed with the given values for the angles");
}
return 0;
}