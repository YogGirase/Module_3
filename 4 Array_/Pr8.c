//8.WAP to reverse a string and check that the string is palindrome or not
#include <stdio.h>

int main () {
    char str[100];
    int i,j,length;
    char Palindrome=1;

    printf("Enter a string:");
    gets(str);

    length=strlen(str);
    for (i = 0, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("Reversed string: %s\n", str);

    
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            Palindrome = 0;
            break;
        }
    }
    if (Palindrome=1)
    {
        printf("'%s' This string is palindrome...",str);
    }
    else
    {
        printf("'%s' This string is not palindrome...",str);
    }
    
    
    
    return 0;
}