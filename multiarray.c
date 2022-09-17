// write a programe to find sum and average of 5 student marks for 5 subject
#include <stdio.h>
void main()
{
    int students[5][5], count, flash, sum[5],average;

    for (flash = 0; flash < 5; flash++)
    {
        printf("Enter marks for student %d", flash + 1);
        for (count = 0; count < 5; count++)
        {
            printf("\nEnter marks for subject %d ", count + 1);
            scanf("%d", &students[flash][count]);
        }
    }
    for (flash = 0; flash < 5; flash++)
    {
        printf("\nmarks of student %d are", flash);
        for (count = 0; count < 5; count++)
        {
            printf("\nfor subject %d %d", count + 1, students[flash][count]);
        }
    }
    for (flash = 0; flash < 5; flash++)
    {
        sum[flash] = 0;
        for (count = 0; count < 5; count++)
        {
            sum[flash] = sum[flash] + students[flash][count];
        }
    }
    for (count = 0; count < 5; count++)
    {
        printf("\nthe value of %d is %d",count+1,sum[count]);
    }
    average=sum[0]+sum[1]+sum[2]+sum[3]+sum[4]/5;
    printf("\nthe value of average is %d",average);
}