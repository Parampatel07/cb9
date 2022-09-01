// write a programe to findout which month has less days out of user given 2 month
#include<stdio.h>
void main()
{
    int month1,month1_days,month2,month2_days;
    printf("Enter value of month1 ");
    scanf("%d",&month1);
    printf("Enter value of month2 ");
    scanf("%d",&month2);
    if(month1==1)
    {
        month1_days=31;
    }
    else if(month1==2)
    {
        month1_days=28;
    }
    else if(month1==3)
    {
        month1_days=31;
    }
    else if(month1==4)
    {
        month1_days=30;
    }
    else if(month1==5)
    {
        month1_days=31;
    }
    else if(month1==6)
    {
        month1_days=30;
    }
    else if(month1==7)
    {
        month1_days=31;
    }
    else if(month1==8)
    {
        month1_days=31;
    }
    else if(month1==9)
    {
        month1_days=30;
    }
    else if(month1==10)
    {
        month1_days=31;
    }
    else if(month1==11)
    {
        month1_days=30;
    }
    else if(month1==12)
    {
        month1_days=31;
    }
    else
    {
        printf("Invalid month");
    }
    printf("value of month days is %d",month1_days);
    if(month2==1)
    {
        month2_days=31;
    }
    else if(month2==2)
    {
        month2_days=28;
    }
    else if(month2==3)
    {
        month2_days=31;
    }
    else if(month2==4)
    {
        month2_days=30;
    }
    else if(month2==5)
    {
        month2_days=31;
    }
    else if(month2==6)
    {
        month2_days=30;
    }
    else if(month2==7)
    {
        month2_days=31;
    }
    else if(month2==8)
    {
        month2_days=31;
    }
    else if(month2==9)
    {
        month2_days=30;
    }
    else if(month2==10)
    {
        month2_days=31;
    }
    else if(month2==11)
    {
        month2_days=30;
    }
    else if(month2==12)
    {
        month2_days=31;
    }
    else
    {
        printf("Invalid month");
    }
    printf("\nvalue of month days is %d",month2_days);

    if(month1_days<month2_days)
    {
        printf("\nmonth 1 has less days");
    }
    else if(month1_days>month2_days)
    {
        printf("\nMonth 2 has less days");
    }
    else
    {
        printf("\nboth are same ");
    }
}