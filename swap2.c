// swap without usign third variable
#include<stdio.h>
void main()
{
    int a,b;
    printf("enter value of a ");
    scanf("%d",&a);
    printf("Enter value of b");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("value of a  is %d and value of b  is %d",a,b);
}