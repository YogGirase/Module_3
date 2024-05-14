//7.Accept marks from user and check pass or fail
#include <stdio.h>

int main () {
    int marks;
    printf("Enter Marks:");
    scanf("%d",&marks);

    if (marks >= 33)
    {
        printf("Student is pass:",marks);
    }
    else if (marks < 33)
    {
        printf("Student is fail:",marks);
    }
    
    
    
    return 0;
}