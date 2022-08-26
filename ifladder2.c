// --> write a programe to print number in words only 2 digit number
// 10-> one zero
// 56-> five six
#include<stdio.h>
void main()
{
    int number,first,second;

    printf("Enter any number");
    scanf("%d",&number);

    first=number/10;
    second=number%10;

    if(first==1)
    {
        printf("one ");
    }
    else if(first==2)
    {
        printf("Two ");
    }
    else if(first==3)
    {
        printf("three ");
    }
    else if(first==4)
    {
        printf("four ");
    }
    else if(first==5)
    {
        printf("Five ");
    }
    else if(first==6)
    {
        printf("Six ");
    }
    else if(first==7)
    {
        printf("Seven ");
    }
    else if (first==8)
    {
        printf("Eight ");
    }
    else if(first==9)
    {
        printf("Nine ");
    }
    else
    {
        printf("Invalid input");
    }

    if(second==1)
    {
        printf("One");
    }
    else if(second==2)
    {
        printf("Two");
    }
    else if(second==3)
    {
        printf("Three");
    }
    else if(second==4)
    {
        printf("Four");
    }
    else if(second==5)
    {
        printf("five");
    }
    else if(second==6)
    {
        printf("Six");
    }
    else if(second==7)
    {
        printf("Seven");
    }
    else if(second==8)
    {
        printf("Eight");
    }
    else if(second==9)
    {
        printf("Nine");
    }
    else
    {
        printf("Invalid input");
    }
    
}