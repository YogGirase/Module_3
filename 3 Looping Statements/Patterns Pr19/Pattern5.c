/*
A
A B
A B C 
A B C D
A B C D E
*/
#include <stdio.h>

int main () {
    int ch='A';
    int row,col;

    for ( row = 0; row <=4; row++)
    {
        for ( col = 0; col <= row; col++)
        {
            printf("%c ",ch+col);
            
        }
        printf("\n");
    }
    
    return 0;
}