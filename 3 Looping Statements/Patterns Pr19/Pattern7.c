#include <stdio.h>

int main() {
    int size;

    printf("Enter size: ");
    scanf("%d", &size);

    int arr1[size][size];
    int row = 0, col;
    int num = 1;
    int end = size - 1;

    for (row = 0; row < size / 2; row++, end--) {
        // loop for left to right
        for (col = row; col < end; col++) {
            arr1[row][col] = num++;
        }

        // loop for top to bottom
        for (col = row; col <= end; col++) {
            arr1[col][end] = num++;
        }

        // loop for right to left
        for (col = end - 1; col >= row; col--) {
            arr1[end][col] = num++;
        }

        // loop for bottom to top
        for (col = end - 1; col > row; col--) {
            arr1[col][row] = num++;
        }
    }

    // printing array
    printf("Spiral pattern:\n");
    for (row = 0; row < size; row++) {
        for (col = 0; col < size; col++) {
            printf("%3d ", arr1[row][col]);
        }
        printf("\n");
    }

    return 0;
}
