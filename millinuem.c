// write a programe to find wheter the given year is millimuem year or not
// 1000,2000,3000,4000,5000,6000
#include<stdio.h>
void main()
{
    int year,millineum;

    printf("Enter value of year");
    scanf("%d",&year);

    millineum=year%1000;
    if(millineum==0)
    {
        printf("it is a millineum year");
    }
    else
    {
        printf("it is not a millinuem year");
    }
}                                   