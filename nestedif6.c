#include<stdio.h>
void main()
{
    int month,day;

    printf("Enter your month ");
    scanf("%d",&month);

    printf("Enter your days ");
    scanf("%d",&day);

    if((month==3 && day<=21) || (month==4 && day<=19))
    {
        printf("zodiac sign is aries");
    }
    
}