// 5.WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice
#include <stdio.h>

int main() {
    int arr1[5], arr2[5];
    int choice, temp;
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array1: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter elements in array2: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }
    printf("1. Ascending...\n");
    printf("2. Descending....\n");
    printf("Enter a Choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("You want array in ascending order....\n");
        for (int i = 0; i < size; i++) {
                for (int j = i + 1; j < size; j++) {
                    if (arr1[i] > arr1[j]) {
                        temp = arr1[i];
                        arr1[i] = arr1[j];
                        arr1[j] = temp;
                    }
                }
            }
         for (int i = 0; i < size; i++) {
                for (int j = i + 1; j < size; j++) {
                    if (arr2[i] > arr2[j]) {
                        temp = arr2[i];
                        arr2[i] = arr2[j];
                        arr2[j] = temp;
                    }
                }
            }
         printf("\nElements of array in ascending order: ");
            for (int i = 0; i < size; i++) {
            printf("%d \t", arr1[i]);
        }
        printf("\n");
        printf("\nElements of array in ascending order: ");
            for (int i = 0; i < size; i++) {
            printf("%d \t", arr2[i]);
        }
        break;
    case 2: printf("You want array in descending order....\n");
            for (int i = 0; i < size; i++) {
                for (int j = i + 1; j < size; j++) {
                    if (arr1[i] < arr1[j]) {
                        temp = arr1[i];
                        arr1[i] = arr1[j];
                        arr1[j] = temp;
                    }
                }
            }
            for (int i = 0; i < size; i++) {
                for (int j = i + 1; j < size; j++) {
                    if (arr2[i] < arr2[j]) {
                        temp = arr2[i];
                        arr2[i] = arr2[j];
                        arr2[j] = temp;
                    }
                }
            }
             printf("Elements of array in descending order: ");
                for (int i = 0; i < size; i++) {
                printf("%d \t", arr1[i]); }
                printf("\n");
             printf("Elements of array in descending order: ");
                for (int i = 0; i < size; i++) {
                printf("%d \t", arr2[i]);}

        break;
    
    default:
    printf("Enter valid choice...");
        break;
    }


    return 0;
}