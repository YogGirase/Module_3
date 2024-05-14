//9.C Program to Check Uppercase or Lowercase or Digit or Special Character
#include <stdio.h>

int main () {
    char ch;
    printf("Enter a charecter:");
    scanf("%c",&ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Charector is Uppercase:",ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Charector is lowercase:",ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Charector is in Digit:",ch);
    }
    else
    {
        printf("Charector is Special char:",ch);
    }
    
    
    return 0;
}