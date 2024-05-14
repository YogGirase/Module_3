//13.WAP to accept 5 students name and store it in array
#include <stdio.h>

int main () {
    char Student_name[50][50];
    int total_std;
    int i;

    printf("Enter number of students:");
    scanf("%d",&total_std);

    printf("Enter Students Names:\n");
    for (int i = 0; i < total_std; i++)
    {
        printf("Name of student%d:",i+1);
        scanf("%s",&Student_name[i]);
    }
    
    printf("\n Students Names...\n");
    for ( i = 0; i < total_std; i++)
    {
        printf("Student %d Name is:%s\n",i + 1,Student_name[i]);
    }
    
    
    
    return 0;
}