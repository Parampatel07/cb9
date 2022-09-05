#include <stdio.h>
void main()
{
    int count, flash=6;
    while (flash>0)
    {
        count = 0;
        while (count < flash)
        {
            printf("*");
            count++;
        }
        // minus--;
        printf("\n");
        flash--;
    }
}