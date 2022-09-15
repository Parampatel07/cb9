// write a programe to findout sum ,average of 5 student marks
#include <stdio.h>
void main()
{
    int students[5], count, total;
    float average;
    for (count = 0; count < 5; count++)
    {
        printf("Enter marks of student %d", count + 1);
        scanf("%d", &students[count]);
    }
    count = 0;
    while (count < 5)
    {
        printf("\nmarks of student %d is %d", count + 1, students[count]);
        count++;
    }
    total = 0;
    count = 0;
    do
    {
        total = total + students[count];
        count++;
    } while (count < 5);
    printf("\nthe value of total is %d",total);
    average=total/5;
    printf("\nthe value of average is %f",average);
}