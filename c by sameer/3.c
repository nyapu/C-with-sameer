// @sameer nyapu
// write a program to read the daily income of a person in a weak and caculate total and average daily income of the person during the week
#include <stdio.h>
#include <conio.h>
void main()
{
    float inc[7], avg, t = 0;
    int i;
    printf("\n Enter the daily income of a person in a week"); // code to input array and variables
    for (i = 0; i < 7; i++)
    {
        scanf("%f", &inc[i]);
    }
    printf("the daily income of a person is:\n");
    for (i = 0; i < 7; i++)
    {
        printf("RS %f\t", inc[i]);
    }
    printf("\n");
    for (i = 0; i < 7; i++)
    {
        t = t + inc[i];
    }
    avg = t / 7;
    printf("the total income of the person is %f\n\n", t);
    printf("the average of person =RS .%f", avg);
}

// thank you