//@sameer nyapu
// WAP to input any 50 numbers in an array and count how many are even and odd numbers are list.
#include <stdio.h>
#include <conio.h>
void main()
{
    int num[50], i, even, odd; // code to display variables and array
    printf("Enter 50 numbers:");
    for (i = 0; i < 50; i++)
    {
        scanf("%d", &num[i]);
    }
    even = odd = 0;
    for (i = 0; i < 50; i++)
    {

        if (num[i] % 2 == 0)
        {
            even++;
        }
        if (num[i] % 2 == 1)
        {
            odd++;
        }
    }
    printf("the total even numbers are %d\n\n", even);
    printf("the totoal odd numbers are %d", odd);
}
// thank you