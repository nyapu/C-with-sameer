/* WAP to  display factorial of a given number using recursive function*/

#include<stdio.h>
#include<conio.h>
int factorial(int);
void main(){
    int a,Num;
    printf("Enter a number:");
    scanf("%d",&a);
    Num=factorial(a);
    printf("The factorial of %d = %d",a,Num);
    getch();
}
int factorial(int n){
    int f;
   if(n==1)
   return 1;
   else{
       f=n*factorial(n-1);
       return(f);
   }
}
/*Thank you
BMC BIT-1st sem
*/