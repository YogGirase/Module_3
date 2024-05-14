//4. WAP to print table up to given numbers
#include <stdio.h>

int main() {
    int n, i, j;

    
    printf("Enter the number of rows for the multiplication table: ");
    scanf("%d", &n);

    
    printf("Multiplication Table up to %d:\n", n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= 10; j++) {
            printf("%d \t", i * j);
        }
        printf("\n");
    }

    return 0;
}
