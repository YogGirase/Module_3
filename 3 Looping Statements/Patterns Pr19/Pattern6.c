/*
*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
*
*/
#include <stdio.h>

int main () {
    int ch='*';
    int row,col;

    for ( row = 0; row <= 5; row++)
    {
        for ( col = 0; col < row; col++)
        {
            printf("%c ",ch);
        }
        printf("\n");
       
    }
     for ( row = 6; row >= 0; row--)
    {
        for ( col = 1; col <= row; col++)
        {
            printf("%c ",ch);
        }
        printf("\n");
    }
    
    
    

    return 0;
}