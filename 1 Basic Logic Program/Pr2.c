//2 Write a program to make Simple calculator (to make addition, subtraction,multiplication, division and modulo)

#include<stdio.h>
int main(){
    int num1,num2,Addition,Substraction,Multiplication,Modulo;
    float Division;
    printf("Enter a Value:");
    scanf("%d %d",&num1,&num2);

    Addition = num1 + num2;
    printf("Addition of numbers:%d",Addition);

    Substraction = num1 - num2;
    printf("\n Substraction of numbers:%d",Substraction);

    Multiplication = num1 * num2;
    printf("\n Multiplication of numbers:%d",Multiplication);

    Division = num1 / num2;
    printf("\n Division of numbers:%f",Division);

    Modulo = num1 % num2;
    printf("\n Modulo of numbers:%d",Modulo);
    return 0;


}