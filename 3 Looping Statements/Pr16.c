//16.Calculate the Sum of Natural Numbers Using the While Loop
#include <stdio.h>

int main () {
    int num,i=0,sum=0;

    printf("Enter how many Natural numbers you want....:");
    scanf("%d",&num);

    while (i<=num)
    {
        
        sum+=i;
        i++;
    }
    printf("Sum Of natural numbers.....:%d",sum);
    

    return 0;
}