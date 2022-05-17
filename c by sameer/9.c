//@sameer nyapu
// WAP  to input the marks of any 100 students in computer sience and count how many students got marks in the range of 70 to 90
#include <stdio.h>
#include <conio.h>
void main()
{
    int num[100], i, count = 0;
    printf("Enter the marks of 100 students:");
    for (i = 0; i < 100; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 100; i++)
    {
        if (num[i] >= 70 && num[i] <= 90)
        {
            count++;
        }
    }
    printf("the range of students got marks 70 to 90 are %d", count);
}
// thank you