//@sameer nyapu
// WAP to input any 50 numbers in an array and find the sum of positive numbers only
#include <stdio.h>
#include <conio.h>
void main()
{
    int num[50], i, sum = 0;     // code to declare array and variables
    printf("Enter 50 numbers:"); // code to enter value
    for (i = 0; i < 50; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 50; i++)
    {
        if (num[i] > 0)
        {
            sum = sum + num[i];
        }
    }
    printf("the sum of positeve number is %d", sum);
}
// thank you