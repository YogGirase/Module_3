/*19.Write a program in C to calculate and print the electricity bill of a given 
customer. The customer ID, name, and unit consumed by the user should 
be captured from the keyboard to display the total amount to be paid to the 
ustomer. The charge are as follow :
 Unit                               :Charge/unit
 upto 350                          :@1.20
 350 and above but less than 600   :@1.50
 600 and above but less than 800   :@1.80
 800 and abov                      :@2.00
If bill exceeds Rs. 800 then a surcharge of 18% will be charged and 
the minimum bill should be of Rs. 256/-*/
#include <stdio.h>
int main() {
    int customerID, units;
    char name[50];
    float totalAmount, surcharge = 0;

    printf("Enter your customer ID: ");
    scanf("%d", &customerID);
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter the units consumed: ");
    scanf("%d", &units);

    if (units <= 350) {
        totalAmount = units * 1.20;
    } else if (units >= 300 && units <= 600) {
        totalAmount = units * 1.50;
    }
     else if (units >= 600 && units < 800) {
        totalAmount = units * 1.80;
     }
     else{
     totalAmount = units *2.00;
     }
     printf("Total amountof electricity bill: %f\n",totalAmount);
     if (totalAmount>800)
     {
       surcharge = totalAmount * 0.18;
        totalAmount += surcharge;
     }
     if (totalAmount < 256){
        totalAmount = 256;
        }
     printf("Total amount of electricity bill including surcharged: %f",totalAmount);

    return 0;
}