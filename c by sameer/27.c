//@sameer nyapu
// WAP  to input any two matrices of 3*4 size and find their sum
#include <stdio.h>
#include <conio.h>
void main()
{
    int m1[3][4], m2[3][4], i, j, sum;
    printf("\nEnter the value of first matrix:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("\nEnter the value of second matrix:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }
    printf("The first matrix is:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", m1[i][j]);
        }
        printf("\n");
    }

     printf("The second matrix is:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", m2[i][j]);
        }
        printf("\n");
    }
    printf("the sum of first and second matrix is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d\t",m1[i][j]+m2[i][j]);
        }
        printf("\n");
    }
    
}
//thank you