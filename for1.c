// write a programe to make following pattern
// 3]write a program   to print following pattern
// 1 8 27 64 .... 10000
// 1 2  3 4
#include <stdio.h>
void main()
{
    int number = 1,answer=0;

    // printf("%d", number);
    for(number=1 ; answer<9261 ; number++)
    {
        answer = number * number * number;
        printf(" %d ", answer);
    }
}