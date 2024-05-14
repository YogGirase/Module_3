//33.C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include <stdio.h>

int main() {
    int num;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("First three powers of %d are:-\n", num);
    printf("N^1:%d\n", num); 
    printf("N^2:%d\n", num * num);      
    printf("N^3:%d\n", num * num * num);
    
    return 0;
}
