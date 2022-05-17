//@sameer nyapu
// WAP to input any 50 numbers in an array and find the sum of odd numbers
#include <stdio.h>
#include <conio.h>
void main()
{
    int num[50], i, sum = 0; // code to declare array and variables
    printf("Enter 50 numbers:");
    for (i = 0; i < 50; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 50; i++)
    {
        if (num[i] % 2 == 1)
        {
            sum = sum + num[i];
        }
    }
    printf("the sum of even numbers in 50 numbers is %d", sum);
}
// thank you