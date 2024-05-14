//17.Accept 5 numbers from user and perform sum of array
#include <stdio.h>

int main () {
    int num[5];
    int sum=0,i;

    printf("Enter A numbers:");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&num[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        sum+=num[i];
    }
    printf("Sum of array:%d",sum);
    
    
    return 0;
}