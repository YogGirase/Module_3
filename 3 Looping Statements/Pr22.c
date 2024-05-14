/*22.
 C Program to Reverse a Number Using FOR Loop
*/
#include <stdio.h>

int main () {
    int num ,revnum=0,rem;
    printf("Enter a Number:");
    scanf("%d",&num);

    for ( ; num != 0; num /= 10) {
        rem = num % 10;
        revnum = revnum * 10 + rem;
    }

    printf("Reversed number: %d\n", revnum);

    
    return 0;
}