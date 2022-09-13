// print abcd using do while loop
#include <stdio.h>
void main()
{
    int letter = 96;
    do
    {
        letter = letter + 1;
        printf("%c ", letter);
    }while(letter<122);
}