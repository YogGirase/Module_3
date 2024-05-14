/*21.
Accept 3 numbers from user using while loop and check each numbers 
palindrome
*/

#include <stdio.h>

int main () {
    int Num1,Num2,Num3;
    int n1,n2,n3,rem,rev1=0,rev2=0,rev3=0;
     printf("Enter Numbers:");
     scanf("%d %d %d",&Num1,&Num2,&Num3);
     n1=Num1;
     while (n1!=0)
     {
        rem=n1 % 10;
        rev1=(rev1 * 10) + rem;
        n1=n1 / 10;
     }
     if (rev1==Num1)
     {
       printf("%d is Palindrome....",Num1);
     }
     else
     {
        printf("\n %d is not Palindrome....",Num1);
     }
     
     
     n2=Num2;
     while (n2!=0)
     {
        rem=n2 % 10;
        rev2=(rev2 * 10) + rem;
        n2=n2 / 10;
     }
     if (rev2==Num2)
     {
       printf("\n %d is Palindrome....",Num2);
     }
     else
     {
        printf("\n %d is not Palindrome....",Num2);
     }


     n3=Num3;
     while (n3!=0)
     {
        rem=n3 % 10;
        rev3=(rev3 * 10) + rem;
        n3=n3 / 10;
     }
     if (rev3==Num3)
     {
       printf("\n %d is Palindrome....",Num3);
     }
     else
     {
        printf("\n %d is not Palindrome....",Num3);
     }
     
     
    return 0;
}