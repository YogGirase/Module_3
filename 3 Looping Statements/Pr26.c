/*26.
1/2 - 2/3 + 3/4 - 4/5 + 5/6 - ...... n
*/
#include <stdio.h>

int main() {
    int num, i;
    float sum = 0;

    
    printf("Enter the Number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        if (i % 2 == 1) {
           
            sum += (float)i / (i + 1);

        } 
        else {
            sum -= (float)i / (i + 1);
        }
    }

    printf("Sum of the series 1/2 - 2/3 + 3/4 - 4/5 + 5/6 - ...... %d: %.2f\n", num, sum);

    return 0;
}
