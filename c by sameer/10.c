//@sameer nyapu
// WAP to input the marks of any 50 students in a subject and count how many students got above the average marks
#include <stdio.h>
#include <stdio.h>
void main()
{

    int num[50], i, sum = 0;
    int avg, count = 0;
    printf("Enter the marks for 50 studnets:");
    for (i = 0; i < 50; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 50; i++)
    {
        sum = sum + num[i];
    }
    avg = sum / 50;
    for (i = 0; i < 50; i++)
    {
        if (num[i] > avg)
        {
            count++;
        }
    }
    printf("the no of students the got marks above the average is %d", count);
}
// thank you