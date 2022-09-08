// write a program to print following series
// 0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55 ... 10000
#include <stdio.h>
void main()
{
    int num1 = 0, num2 = 1, answer=1;

    printf(" %d ", num1);
    printf(" %d ", num2);

    for(num1=2;answer<9870;num1++)
    {
        answer = answer + num1;
        printf(" %d ", answer);
    }
}