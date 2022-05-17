// @sameer nyapu
// WAP to input any 50 numbers in an aray and find the sum of even numbers only
#include <stdio.h>
#include <conio.h>
void main()
{
    int num[50], i, sum = 0; // code to declare array and variables
    printf("Enter the 50 numbers:");
    for (i = 0; i < 50; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 50; i++)
    {
        if (num[i] % 2 == 0)
        {
            sum = sum + num[i];
        }
    }
    printf("the sum of even number only is : %d", sum);
}
// thank you