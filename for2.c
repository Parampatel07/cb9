// write a programe to printn following pattern
// 2, 1, 3, 4, 7, 11, 18, 29, 47, 76, 123 .... 300
#include <stdio.h>
void main()
{
    int first = 2, second = 1, answer=3, temp;
    
    for(temp=0;answer<300;temp++)
    {
        first = answer;
        printf(" %d ", answer);
        answer = second + answer;
        second = answer;
        printf(" %d ", answer);
        answer = answer + first;
    }
}