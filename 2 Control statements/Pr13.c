//13.WAP to find minimum number among 3 numbers using ternary operator
#include <stdio.h>

int main () {
    int num1,num2,num3,min;
    printf("Enter a number:");
    scanf("%d %d %d",&num1,&num2,&num3);


    min = (num1<num2)?((num1<num3)?num1:num3):((num2<num3)?num2:num3);
    printf("The manimum number is:%d\n",min);
    return 0;
}