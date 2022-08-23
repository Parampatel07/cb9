// write a programe to split user given 2 digit into 2 different variables
// --> 56 -> first=5,second=6
//--> 78 ->first =7,second=8
#include<stdio.h>
void main()
{
    int number,first,second ;
    //declartion of variable 
    printf("Enter your number");
    scanf("%d",&number);
    // number=56;
    // +,-,*,/,%
    first=number/10;
    second=number%10;
    printf("First is %d and second is %d",first,second);
}