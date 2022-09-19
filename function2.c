// example of function
#include<stdio.h>
void Getsum(int a,int b)
{
    int answer;
    answer=a-b;
    printf("Your answer is %d",answer);
}
void main()
{
    int num1,num2;
    printf("Enter value of num1 ");
    scanf("%d",&num1);
    printf("Enter value of num2 ");
    scanf("%d",&num2);
    Getsum(num2,num1);
}