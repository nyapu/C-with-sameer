//@sameer nyapu
//WAP to input any two matrices of 3*3 sizes and find their product
#include<stdio.h>
#include<conio.h>
void main(){


    int m1[3][3],m2[3][3],m3[3][3],r,c,sum,i;
    printf("\nEnter the first matrix:");
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            scanf("%d",&m1[r][c]);
        }
    }
    printf("\nEnter the second matrix:");
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            scanf("%d",&m2[r][c]);
        }
    }
    printf("The first matrix is:\n");
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            printf("%d\t",m1[r][c]);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("The second matrix is :\n");
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            printf("%d\t",m2[r][c]);
        }
        printf("\n");
    }
    printf("\n");
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            sum=0;
            for(i=0;i<3;i++){
                sum=sum+m1[r][i]*m2[i][c];
            }
            m3[r][c]=sum;
        }
    }
    printf("The product of first and second matrix is :\n");
    for(r=0;r<3;r++){
        for(c=0;c<3;c++){
            printf("%d\t",m3[r][c]);
        }
        printf("\n");
    }
 
}
//thank you