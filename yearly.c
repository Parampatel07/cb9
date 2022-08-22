// write a programe to find yearly income and income tax 10% on it on the basis of monthly income
// take monthly income as input from user
#include<stdio.h>
void main()
{
    int monthly,yearly;
    float tax,final_income;
    printf("Enter your monthly income");
    scanf("%d",&monthly);
    yearly=monthly*12;
    printf("Value of yearly income is %d",yearly);
    tax=yearly*10/100;
    printf("\nYour tax is %f",tax);
    final_income=yearly-tax;
    printf("\nYour final income is %f",final_income);
}