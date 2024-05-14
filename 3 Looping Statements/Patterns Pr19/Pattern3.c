/*   *
    ***
   *****
  *******
 ********** 
*/
#include <stdio.h>

int main () {
     int row=5,i,col,space;
     char c = '*';

    for (int i=0;i<row;i++)
    {
      for ( space=0;space<=row-i-1;space++)
        {
           printf(" ");

        }
          for ( col=0;col<2*i+1;col++)
          {
              printf("%c", c);
              
          }
            
     printf("\n");   
    }
    return 0;
}