// write a programe to find whether the given number is odd or even
#include<stdio.h>
void main()
{
    int  number;
        printf("Enter value of number");
    scanf("%d",&number);

    printf("The Value of number is %d",number);

    if(number%2==0)
    {
        printf("\nit is even number");
    }
    else
    {
        printf("\nit is odd number");
    }
    printf("\nGoodbyee..");
}