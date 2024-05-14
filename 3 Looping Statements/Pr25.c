/*25.
(1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
*/
#include <stdio.h>

int main () {
    int num,sum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    
    for ( int i= 0; i <= num; i++){
    for (int j = 1; j < i; j++)
    {
        sum+=j;
    
    }
    }
    
    printf("Sum of squares (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+%d)  = %d \n",num,sum);
    
    return 0;
}