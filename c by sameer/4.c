// @ sameer nyapu
// WAP to input the age of 'n' numbers of students in a class and find the average age of the sudents in that class
#include <stdio.h>
#include <conio.h>

void main()
{
    int age[100], n, i, avg; // code to declare array and variables
    int total;
    printf("how many student's age you want to know");
    scanf("%d", &n);
    printf("Enter the age %d students", n); // code to enter the value
    for (i = 0; i < n; i++)
    {
        scanf("%d", &age[i]);
    }
    printf("the age of students are\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", age[i]);
    }
    printf("\n");
    total = 0;
    for (i = 0; i < n; i++)
    {
        total = total + age[i];
    }
    avg = total / n;
    printf("the average age of students is: %d", avg);
}
// thank you