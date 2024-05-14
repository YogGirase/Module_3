/*24.
(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

*/
#include <stdio.h>

int main () {
    int num,sum=0;
    printf("Enter a number:");
    scanf("%d",&num);


    for ( int i= 0; i <= num; i++)
    {

        sum+=i*i;
    }
    printf("Sum of squares (1*1) + (2*2) + (3*3) + ......+ (%d*%d)  = %d \n",num,num,sum);
    
    return 0;
}