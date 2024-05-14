//14.WAP to find the largest of three numbers.
#include <stdio.h>

int main () {
    int num1,num2,num3,large_num;
    printf("Enter a number:");
    scanf("%d %d %d",&num1,&num2,&num3);
    
   if (num1 >= num2 && num1 >= num3) {
        large_num = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        large_num = num2;
    } else {
        large_num = num3;
    }

    
    printf("Lagest Numbers is:%d",large_num);

    return 0;
}