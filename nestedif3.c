// write a programe to findout which number is lowest without using and or
#include <stdio.h>
void main()
{
    int num1, num2, num3;

    printf("Enter value of num1");
    scanf("%d", &num1);
    printf("Enter value of num2");
    scanf("%d", &num2);
    printf("Enter value of num3");
    scanf("%d", &num3);

    if (num1 == num2 && num2 == num3)
    {
        printf("All are same");
    }
    else
    {

        if (num1 < num2)
        {
            if (num1 < num3)
            {
                printf("num 1 is lowest");
            }
            else
            {
                printf("num 3 is lowest");
            }
        }
        else
        {
            if (num2 < num3)
            {
                printf("num 2 is lowest");
            }
            else
            {
                printf("num 3 is lowest ");
            }
        }
    }

    printf("\nGoodbye..");
}