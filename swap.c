// write a programe to peform swap
// a=100,b=200
// a=200,b=100
#include <stdio.h>
void main()
{
    int num1, num2, temp;

    printf("Enter the value of num1");
    scanf("%d", &num1);
    printf("Enter the value of num2");
    scanf("%d", &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("value of num1 is %d and value of num2 is %d", num1, num2);
}
