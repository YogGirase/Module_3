/*32.
Accept 2 numbers and find out its sum check it size
*/
#include <stdio.h>

int main () {
    int num1,num2,sum;

    printf("Enter the Numbers:");
    scanf("%d %d",&num1,&num2);

    sum=num1 + num2;

    printf("Sum of Numbers Num1:%d + Num2:%d = %d \n",num1,num2,sum);
    
    // Checking the size of the sum......
    printf("Size of sum is:%d bytes",sizeof(sum));
    return 0;
}