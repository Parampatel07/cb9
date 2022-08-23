// write a programe to find which number is greater out of given two number
#include <stdio.h>
void main()
{
    int num1, num2;

    printf("Enter value of num1");
    scanf("%d", &num1);
    printf("Enter value of num2");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("\nnum1 is greater");
    }
    else
    {
        printf("\nnum2 is greater");
    }
    printf("\nGoodbyee...");
}