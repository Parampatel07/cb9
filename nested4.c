#include <stdio.h>
void main()
{
    int space, count,flash,minus=8;
    for(flash=1;flash<10;flash++)
    {
        for (space = 0; space < minus; space++)
        {
            printf(" ");
        }
        for (count = 0; count < flash; count++)
        {
            printf("* ");
        }
        printf("\n");
        minus--;
    }
}