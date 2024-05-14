//18.Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
int main(){
    float cost_price,selling_price,profit,loss;

    printf("Enter cost price:");
    scanf("%f",&cost_price);
    printf("Enter selling price:");
    scanf("%f",&selling_price);

    if(selling_price > cost_price)
    {
        profit = selling_price - cost_price;
        printf("you made a Profit %.2f\n",profit);
    }
   else if(cost_price > selling_price)
 {
    loss= cost_price - selling_price;
        printf("you made a Loss %.2f \n",loss);
    }
    else{
        printf("no profit no loss\n");
    }
    return 0;
}