// write a programe to print "it is negative number " if the user given number is negative
#include<stdio.h>
void main()
{
    int number=0;
    printf("Enter value for number");
    scanf("%d",&number);
    printf("Value of number is %d",number);
    if(number<0)
    {
        printf("\nIt is negative number");
    }
    printf("\nGoodbyee..");
}