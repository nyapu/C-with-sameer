/* Write a function which receives a float and int from main(),finds the product of these two and returns the product
which is printed through main.*/
#include<stdio.h>
#include<conio.h>
float product(float,int);
void main(){
   float a,result;
   int b;
   printf("Enter the value of a in float:");
   scanf("%f",&a);
   printf("Enter the value of b in integer:");
   scanf("%d",&b);
   result=product(a,b);
   printf("The product of two values %f * %d =  %f",a,b,result);
    getch();
}
float product(float x,int y){
  float z;
  z=x*y;
  return(z);
}
/*Thank you
BMC BIT-1st sem
*/
 