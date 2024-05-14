//14.Find ascii value of given number
#include <stdio.h>
         
int main () {
   int number;
    printf("Enter a  number:");
    scanf("%d", &number);
    char asciivalue = number; 
    printf("Ascii value :%c" ,asciivalue);

    return 0;
}