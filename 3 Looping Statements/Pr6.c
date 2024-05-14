//6.WAP to print Fibonacci series up to given numbers
#include <stdio.h>

int main () {
    int num,i,temp;
    int n1=0,n2=1;
    printf("Enter a number:");
    scanf("%d",&num);

    printf("%d,%d",n1,n2);
    for ( i = 1; i <= num; ++i)
    {
        temp=n1+n2;
        printf(",%d",temp);
        n1=n2;
        n2=temp;

        
    }
    
    return 0;
}