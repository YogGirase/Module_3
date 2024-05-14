/*23.
1 + 2 + 3 + 4 + 5 + ... + n
*/
#include <stdio.h>

int main () {
    int num,sum=0;
    printf("Enter a number:");
    scanf("%d",&num);

    for ( int i= 0; i <= num; i++)
    {
        sum+=i;
    }
    printf("Sum of numbers 1 + 2 + 3 + 4 + 5 + ......+ %d=%d \n",num,sum);
    
    return 0;
}