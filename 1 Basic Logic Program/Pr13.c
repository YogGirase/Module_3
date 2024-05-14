//13.Find character value from ascii
#include <stdio.h>

int main () {
   int asciivalue;
    printf("enter ascii value:");
    scanf("%d", &asciivalue);
    char character =  asciivalue;
    printf("Charecter value :%c" ,character);

    return 0;
}