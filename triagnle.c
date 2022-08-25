#include<stdio.h>
void main()
{
    int height,base,triagnle;

    printf("enter the value of height");
    scanf("%d",&height);
    printf("enter the value of base");
    scanf("%d",&base);
   triagnle= height*base/2;
    printf("the value of triagnle is %d",triagnle);
    if (height > base)
    {
        printf("\nheight is greater");
    }
    else
    {
        printf("\nbase is greater");
    }
    printf("\ngoodbyy....");   
    
}