/*31
Convert kilometers into meters
*/
#include <stdio.h>

int main () {
    int meters,kilometers;
    printf("Enter a Kilometers:");
    scanf("%d",&kilometers);

    // Convert kilometers to meters
    meters = kilometers*1000;

    printf("%d Kilometers is = %d Meters",kilometers,meters);
    return 0;
}