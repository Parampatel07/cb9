// 10) Write a C program to calculate final electricity bill based upon below given criteria. take monthly electricity unit from user as input. 

// units           price  per unit 
// <100            1
// >100 & <200     2 
// >200 & <300     3
// >300 & <400     4
// >400            5
// also calculate 5% percentage energy charge on total bill amount & display total amount 
#include<stdio.h>
void main()
{
    int unit,amount;

    printf("Enter your unit ");
    scanf("%d",&unit);

    if(unit<=100)
    {
        amount=unit*1;
        printf("amount is %d",amount);
    }
    else if(unit>100 && unit<=200)
    {
        amount=unit*2;
        printf("amount is %d",amount);
    }
    else if(unit>200 && unit<=300)
    {
        amount=unit*3;
        printf("amount is %d",amount);
    }
    else if(unit>300 && unit<=400)
    {
        amount=unit*4;
        printf("Amount is %d",amount);
    }
    else
    {
        amount=unit*5;
        printf("amount is %d",amount);
    }
    printf("\nGoodbyee..");
}