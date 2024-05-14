//9. Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include <stdio.h>
int digitSum(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10; 
        num /= 10;       
    }
    return sum;

}
int main () {
    int num,sum=0;
    printf("Enter a Number:");
    scanf("%d",&num);

    sum=digitSum(num);
    printf("Summation of given number..:%d",sum);
    return 0;
}