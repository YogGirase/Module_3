 //8.WAP to accept the height of a person in centimeters and categorize the person according to their height.
#include <stdio.h>

int main () {
    int height;
    printf("Enter a person height:");
    scanf("%d",&height);

    if (height < 150)
    {
        printf("Person is short:",height);
    }
    else if (height <= 150  && height < 170)
    {
        printf("The person is Average:",height);
    }
    else if (height >= 170 && height < 190)
    {
        printf("The person is Tall:");
    }
    else
    {
        printf("The person is very Tall:");
    }
    
    
    
    return 0;
}