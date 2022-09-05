#include <stdio.h>
void main()
{
    int count,flash=0;
    while(flash<50)
    {
        count = 0;
        while (count <= flash)
        {
            printf("*");
            count++;
        }
        printf("\n");
        flash++;
    }
}