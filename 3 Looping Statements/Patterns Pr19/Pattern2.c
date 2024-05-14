// A 
// BC 
// DEF 
// GHIJ
// KLMNO

#include <stdio.h>

int main () {
     int row,col;
     char c = 'A';

    for (int row=0;row<=4;row++)
    {
        for ( col=0;col<=row;col++)
        {
            printf("%c", c);
            c++;
        }
     printf("\n");   
    }
    return 0;
}