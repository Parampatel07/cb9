#include <stdio.h>
void main()
{
    int count = 0, space = 0,flash=0;
    for (count = 0; count < 7; count++)
    {
        printf("*");
    }
    printf("\n");
    printf("*");
    for(flash=4;flash>0;flash--)
    {
        for (space = 0; space < flash; space++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
        printf("*");
    }
}