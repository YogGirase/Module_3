//4.WAP to make simple calculator (operation include Addition, Subtraction,Multiplication, Division, modulo) using conditional statement
#include <stdio.h>

int main () {
    char operators;
    int num1,num2,result;
    
    printf("Enter Operators:(+,-,*,/,%%):");
    scanf("%c",&operators);

    printf("Enter the numbers:");
    scanf("%d %d",&num1,&num2);
    

    if (operators == '+')
    {
        result = num1 + num2;
        printf("Result of Addition is:%d",result);
    }
    else if (operators == '-')
    {
        result = num1 - num2;
        printf("Result of Substraction is:%d",result);
    }
    else if (operators == '*')
    {
        result = num1 * num2;
        printf("Result of Multiplication is:%d",result);
    }
    else if (operators == '/')
    {
        result = num1 / num2;
        printf("Result of Dividision is:%d",result);
    }
    else if (operators == '%%')
    {
        result = num1 % num2;
        printf("Result of Modulo is:%d",result);
    }
    else
    {
        printf("invalid:");
    }
    
    

    
    return 0;
}