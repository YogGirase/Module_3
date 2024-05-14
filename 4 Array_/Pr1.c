// 1.Write a program to find out the max number from given array using function
#include <stdio.h>

int main () {
    int arr[]={2,3,5,7,11};
    int max_num = arr[0];
    int lenght=sizeof(arr)/sizeof(arr[0]);

    for (int  i = 0; i < lenght; i++)
    {
        if (arr[i] > max_num)
           max_num=arr[i];
    }
        printf("Max number is:%d",max_num);
        return 0;
        
    
}