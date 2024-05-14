//13.calculate the Factorial of a Given Number using while loop
#include <stdio.h>

int main() {
    int  n, i=1;
    int factorial=1;

    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
        
         while(i<=n)
         {
             
            factorial *= i;
            i++;
            
         }
             printf("Factorial of %d = %d \n", n, factorial);
       
        
        // for (i = 1; i <= n; ++i) {
        //     factorial *= i;
        // }
        // printf("Factorial of %d = %d \n", n, factorial);
    

    return 0;
}
