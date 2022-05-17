// @sameer nyapu
// write a program to input any 10 numbers in an array and find the total.

#include <stdio.h>
#include <conio.h>
void main()
{

    int num[10], i, total = 0;         // code to declare array and others variables
    printf("Enter any 10 numbers:\n"); // code to enter the value
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("the 10 numbers are:"); // code to display
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", num[i]);
    }
    printf("\n");
    // code to display total
    for (i = 0; i < 10; i++)
    {
        total = total + num[i];
    }
    printf("the total of 10 number is %d", total);
}
