/*25.Write a C program to input electricity unit charges and calculate total 
electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
*/
#include <stdio.h>

int main () {
    float unit_charges,total_bill,surcharge;

    printf("Enter the electricity unit charges: ");
    scanf("%f", &unit_charges);

    if (unit_charges <= 50) {
        total_bill = unit_charges * 0.50;
    } else if (unit_charges <= 150) {
        total_bill = unit_charges  * 0.75;
    } else if (unit_charges <= 250) {
        total_bill = unit_charges* 1.20;
    } else {
        total_bill = unit_charges * 1.50;
    }
    printf("Total electricity bill: Rs. %.2f\n", total_bill);

    surcharge = total_bill * 0.20;
    total_bill += surcharge;
    printf("Total electricity bill after added surcharges: Rs. %.2f\n", total_bill);
    return 0;
}