/*15.Write a C program to determine eligibility for admission to a professional 
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks 
in Chem>=50 and Total in all three subject >=190 or Total in Maths and 
Physics >=140 ------------------------------------- Input the marks obtained in 
Physics :65 Input the marks obtained in Chemistry :51 Input the marks 
obtained in Mathematics :72 : Total marks of Maths, Physics and Chemistry
188 Total marks of Maths and Physics : 137 The candidate is not eligible.*/
#include<stdio.h>
int main() {
    int chem_marks,maths_marks,phy_marks,total_marks,total_math_phy;
    printf("Input the marks obtained in physics:");
    scanf("%d",&phy_marks);
    printf("Input the marks obtained in chemistry:");
    scanf("%d",&chem_marks);
    printf("Input the marks obtained in maths:");
    scanf("%d",&maths_marks);
    printf("Total marks of Maths, Physics and Chemistry:");
    scanf("%d",&total_marks);
    printf("Total marks of Maths and Physics:");
    scanf("%d",&total_math_phy);
    if(chem_marks >=50 && phy_marks >=55 && maths_marks>=55 && total_marks >=190)
    {
        printf("The candidate is eligible for addmission.\n");
    }
    else if(total_math_phy >=140 )
    {
       printf("The candidate is eligible for addmission.\n"); 
    }
    else
    {
        printf("The candidate is not eligible for addmission.\n");
    }
}