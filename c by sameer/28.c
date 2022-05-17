//@sameer nyapu
//WAP  to input any two matrices of 2*3 size and find their difference
#include<stdio.h>
#include<conio.h>
void main(){
int m1[2][3],m2[2][3],i,j;
printf("\nEnter the first matrix:");
for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        scanf("%d",&m1[i][j]);
    }
}
printf("\nEnter the second matrix:");
for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        scanf("%d",&m2[i][j]);
    }
}
printf("The first matrix is :\n");
for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        printf("%d\t",m1[i][j]);
    }
    printf("\n");
}
printf("The second matrix is :\n");
for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        printf("%d\t",m2[i][j]);
    }
    printf("\n");
}
printf("The difference of first and second matrix is:\n");
for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        printf("%d\t",m1[i][j]-m2[i][j]);
    }
    printf("\n");
}

}
//thank you