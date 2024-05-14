//2.WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
#include <stdio.h>

int main () {
    int choice;
    float num1,num2,result;
    
   do
    { 
    printf("Enter the numbers:");
    scanf("%f %f",&num1,&num2);
    printf("1. Addition...\n");
    printf("2. Subtraction...\n");
    printf("3. Multiplication...\n");
    printf("4. Division...\n");
    printf("Enter a choice 1-4:");
    scanf("%d",&choice);

    
    
    switch (choice)
    {
    case 1 :
        printf("Your choice is Addition \n");
        result=num1 + num2;
        printf("Addition is = %f \n",result);
        break;
    case 2 :
        printf("Your choice is Subtraction \n");
        result=num1 - num2;
        printf("Subtraction is = %f \n",result);
        break;
    case 3 :
        printf("Your choice is Multiplication \n");
        result=num1 * num2;
        printf("Multiplication is = %f \n",result);
        break;
    case 4 :
        printf("Your choice is Division \n");
        if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2f\n", result);
                } else {
                    printf("Error: Division by zero\n");
                }
        break;
    
    default:
        printf("Invalide choice");
        break;
    }
    }while (choice!=5);
    return 0;
}