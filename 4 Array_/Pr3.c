//3. WAP to find reverse of string using recursion
#include <stdio.h>
int length(char *str) {
    if (*str == '\0')
        return 0;
    else
        return 1 + length(str + 1);
}

void reverseString(char *str, int len) {
    if (len <= 1)
        return;

    char temp = *str;
    *str = *(str + len - 1);
    *(str + len - 1) = temp;

    reverseString(str + 1, len - 2);
}
int main () {
    char str[50];

    printf("Enter A string:");
    gets(str);

    int len = length(str);
    reverseString(str, len);

    printf("Reversed string: %s\n", str);
    return 0;
}