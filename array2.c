// write a programe to take name as input
#include <stdio.h>
void main()
{
    char name[25], count;
    printf("Enter your name ");
    for (count = 0; count < 25; count++)
    {
        scanf("%c", &name[count]);
        if (name[count] == '\n')
        {
            break;
        }
    }
    printf("your name is ");
    for(count=0;name[count]!='\n';count++)
    {
        printf("%c", name[count]);
    }
    printf("\ngoodbyee..");
}