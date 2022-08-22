// write a programe to find bmi
// bmi = kg/m2
#include<stdio.h>
void main()
{
    int weight,height,bmi;
    printf("Enter your weight");
    scanf("%d",&weight);
    printf("Enter your height");
    scanf("%d",&height);
    bmi=weight/(height*height);
    printf("Your bmi is %d",bmi);
}