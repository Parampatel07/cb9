// write a programe findout how many days a month has without using more than 5 else if
#include <stdio.h>
void main()
{
    int month;

    printf("Enter value of month ");
    scanf("%d", &month);

    // month=3;
    if (month <= 12 && month >= 1)
    {

        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 10 || month == 8 || month == 12)
        {
            printf("this month has 31 days");
        }
        else if (month == 2)
        {
            printf("this month has 28/29 days");
        }
        else
        {
            printf("this month has 30 days ");
        }
    }
    else
    {
        printf("invalid month");
    }
}