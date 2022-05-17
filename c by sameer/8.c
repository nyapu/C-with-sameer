//@sameer nyapu
// WAP  to input any 10 numbers and count how many numbers are positive
#include <stdio.h>
#include <conio.h>
void main()
{
    int num[10], i, count = 0;
    printf("Enter 10 numbers ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (num[i] > 0)
        {
            count++;
        }
    }
    printf("the total numbers of positive interger is %d", count);
}
// thank you