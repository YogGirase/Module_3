//10.WAP to show difference between Structure and Union.
/*difference between structure and union...
structure print all value of user input
---structure Details...---
Enter Emp Id:1
Enter Emp Name:Yogu
Enter Emp Salary:110000.490 

 ID:1
 Name:Yogu
 Salary:110000.492188
 union print only largest number of value allocated in memory allocation.....
---Union Data...---  
Enter Emp Id:2       
Enter Emp Name:Yogesh
Enter Emp Salary:20000.650

Emp Id:1184645453
Emp Name:MA£Fsh
Emp Salary:20000.650391 //only print largest value of that input values....
*/
#include <stdio.h>
struct Employee {
    int id;
    char name[20];
    float salary;
};
union department
{
    int id;
    char name[50];
    float salary;
}emp2;

int main () {
    struct Employee emp1;

    printf("---structure Details...---\n");

    printf("Enter Emp Id:");
    scanf("%d",&emp1.id);
    printf("Enter Emp Name:");
    scanf("%s",&emp1.name);
    printf("Enter Emp Salary:");
    scanf("%f",&emp1.salary);

    printf("\n ID:%d",emp1.id);
    printf("\n Name:%s",emp1.name);
    printf("\n Salary:%f",emp1.salary);

    printf("\n---Union Data...---\n");
    printf("Enter Emp Id:");
    scanf("%d",&emp2.id);
    printf("Enter Emp Name:");
    scanf("%s",&emp2.name);
    printf("Enter Emp Salary:");
    scanf("%f",&emp2.salary);

    printf("\nEmp Id:%d",emp2.id);
    printf("\nEmp Name:%s",emp2.name);
    printf("\nEmp Salary:%f",emp2.salary);


    

    return 0;
}