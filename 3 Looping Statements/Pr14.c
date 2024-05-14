//14.Accept 5 numbers from user and find those numbers factorials
#include <stdio.h>

int main() {
    int num, i, fact;

    
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &num);
        fact = 1;
        
        
        for (int j = 1; j <= num; j++) {
            fact *= j;
        }
        
        printf("Factorial of %d is %d\n", num, fact);
    }

    return 0;
}
