/* WAP to calculate sum of the series 1+2+3+4....+n using recursive function*/
#include<stdio.h>
#include<conio.h>
int sum(int);
void main(){
    int a,Num;
    printf("Enter a number:");
    scanf("%d",&a);
    Num=sum(a);
    printf("The sum of %d = %d",a,Num);
    getch();
}
int sum(int n){
    int x;
   if(n==1)
   return 1;
   else{
       x=n+sum(n-1);
       return(x);
   }
}
/*Thank you
BMC BIT-1st sem
*/