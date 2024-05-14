// 1
// 10
// 101
// 1010
// 10101

#include <stdio.h>

int main () {
    int row,col;
    for (int row=0;row<=4;row++)
    {
        for ( col=0;col<=row;col++)
        {
            if (col % 2 == 0) {
                printf("1");
            } else {
                printf("0");
            }
        }
     printf("\n");   
    }
    
    return 0;
}