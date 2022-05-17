//@ sameer nyapu
// wirte a program to input the marks of any 20 students in computer science and find the average marks

#include <stdio.h>
#include <conio.h>
void main()
{
    float marks[20], avg, sum = 0; // code to declare array and variables
    int i;
    printf("Enter the marks of 20 students in CS:\n"); // code to enter the value
    for (i = 0; i < 20; i++)
    {
        scanf("%f", &marks[i]);
    }
    printf("marks of students are:\n"); // code to display
    for (i = 0; i < 20; i++)
    {
        printf("%f\t", marks[i]);
    }
    printf("\n");
    for (i = 0; i < 20; i++)
    {
        sum = sum + marks[i];
    }
    avg = sum / 20; // code to calculate the average
    printf("the average marks of 20 students is %f", avg);
}