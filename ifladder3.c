// write a programe to make calculator
#include <stdio.h>
void main()
{
    int num1, num2, choice, answer;
    printf("Enter your num1");
    scanf("%d", &num1);
    printf("Enter your num2");
    scanf("%d", &num2);

    printf("Select any one");
    printf("\n1 for Addition");
    printf("\n2 for Subtraction");
    printf("\n3 for Division");
    printf("\n4 for mulitipication");
    scanf("%d", &choice);

    if (choice == 1)
    {
        answer = num1 + num2;
        printf("Answer is %d", answer);
    }
    else if (choice == 2)
    {
        answer = num1 - num2;
        printf("Answer is %d", answer);
    }
    else if (choice == 3)
    {
        answer = num1 / num2;
        printf("Answer is %d", answer);
    }
    else if (choice == 4)
    {
        answer = num1 * num2;
        printf("Answer is %d", answer);
    }
    else
    {
        printf("Invalid choice\n");
    }
    printf("\nGoodbye");
}