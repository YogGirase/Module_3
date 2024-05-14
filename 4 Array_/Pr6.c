//6.WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array
#include <stdio.h>
int main () {
    int row=3,col=3,result[row][col];
    int matrix1[row][col];
    int matrix2[row][col];

    printf("Enter elements of matrix 1: ");
    for(int i=0;i<row;i++)
			for(int j=0;j<col;j++)
				scanf("%d", &matrix1[i][j]);
    printf("Enter elements of matrix 2: ");
    for(int i=0;i<row;i++)
			for(int j=0;j<col;j++)
				scanf("%d", &matrix2[i][j]);
    //addition of matrices....
    printf("Addition of matrices is:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
            printf ("%d ",result[i][j]);
        } 
        printf("\n"); 
    }
    //substraction of metrices....
    printf("Substraction of matrices:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
            printf ("%d ",result[i][j]);
        } 
        printf("\n"); 
    }
    //multiplication of matrices....
    printf("Multiplication of matrices:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = matrix1[i][j] * matrix2[i][j];
            printf ("%2d ",result[i][j]);
        } 
        printf("\n"); 
    }
    

    return 0;
}
