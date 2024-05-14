//15.Calculate sum of 10 numbers using of while loop
#include <stdio.h>

int main () {
    int num,sum=0,i=1;

    printf("Enter the 10 numbers...:");
    for (int i = 0; i < 10; i++)
    {
        

    while (i<10)
    {
        scanf("%d",&num);
        sum+=num;
        i++;
    }
    
}
    printf("Sum of 10 numbers is:%d \n",sum);

    
    return 0;
}