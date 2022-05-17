//@sameer nyapu
//WAP to input a 2*3 matrix and display it properly
#include<stdio.h>
   #include<conio.h>
   void main(){
       int m[2][3],i,j;
       printf("\nEnter the 2*3 matrix:");
       for(i=0;i<2;i++){
           for(j=0;j<3;j++){
               scanf("%d",&m[i][j]);
           }
       }
       printf("The matrix is:\n");
       for(i=0;i<2;i++){
           for(j=0;j<3;j++){
               printf("%d\t",m[i][j]);
           }
           printf("\n");
       }
   }
   //thank you