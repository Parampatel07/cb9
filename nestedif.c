// write a programe to findout whether the given letter is vowel or not using and or operator
#include<stdio.h>
void main()
{
    char letter;

    printf("Enter any character ");
    scanf("%c",&letter);

    if(letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u')
    {
        printf("\nit is a vowel");
    }
    else
    {
        printf("\nit is not a vowel");
    }
    printf("\nGoodbyee") ; 
}