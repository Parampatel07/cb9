// write a programe to take name as input
#include <stdio.h>
void main()
{
    char name[25];
    int count;
    int temp=0;
    printf("Enter your name ");
    for (count = 0; count < 25; count++)
    {
        scanf("%c", &name[count]);
        if (name[count] == '\n')
        {
            break;
        }
        temp++;
    }
// printf("the value of temp is %d \n\n\n\n",temp);
    for (count = temp; count >= 0; count--)
    {
        printf("%c", name[count]);
    }
}