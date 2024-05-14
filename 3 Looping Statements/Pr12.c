//12.Program of Armstrong Number in C Using For Loop & While Loop
#include <stdio.h>

int main () {
    int num,result=0,reminder,main_number;
    printf("Enter a value:");
    scanf("%d",&num);

    /*//using while loop.......
    main_number=num;
    while (main_number!=0)//declare condition
    {
        reminder=main_number%10;
        result+=reminder*reminder*reminder;
        main_number /=10;

    }
    //check condition....
    if (num==result)
    {
        printf("%d Armstrong value is...",num);
    }
    else{
        printf("%d is not armstrong number...",num);
    }*/


    //using for loop
    for (main_number=num;main_number!=0;main_number /=10)
    {
        reminder=main_number%10;
        result+=reminder*reminder*reminder;
    }
    if (num==result)
    {
        printf("%d Armstrong value is...",num);
    }
    else{
        printf("%d is not armstrong number...",num);
    }
    

    
    
    
    return 0;
}