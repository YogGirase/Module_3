//17.Calculate 5 numbers from user and calculate number of even and odd using of while loop
#include <stdio.h>

int main () {
    int num,odd_count=0,even_count=0;
    printf("Enter a numbers...:");
    int i=0;
    while (i<5)
    {
        scanf("%d",&num);
        i++;
        if (num % 2==0)
        {
           even_count++;
        }
        else
        {
            odd_count++;
        }
        
        
    }
    printf("Count Of Even Numbers....:%d \n",even_count);
    printf("Count of Odd Numbers...:%d",odd_count);
    
    return 0;
}