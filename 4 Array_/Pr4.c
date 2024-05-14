//4. WAP to find factorial using recursion
#include <stdio.h>
int fact(int num){
    int f;
    if (num==1)
    {
        return 1;
    }
    else
    {
        return f=num*fact(num-1);;
    }
    
}
int main () {
    int num;
    printf("Enter A number:");
    scanf("%d",&num);
    int res=fact(num);
    printf("Factorial=%d",res);
    
    return 0;
}