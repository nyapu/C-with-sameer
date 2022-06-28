/* WAP to check whether the given number is prime or not using userdefined function*/
#include<stdio.h>
#include<conio.h>
int prime(int);
void main(){
    int a,Num;
   printf("Enter a number:");
   scanf("%d",&a);
   Num=prime(a);
   if(Num==2){
       printf("%d is a prime number",a);
   }
   else{
       printf("%d is not a prime number",a);
   }
   
   
    getch();
}
int prime(int n){
    int i,x,count=0;
    for(i=1;i<=n;i++){
    x=n%i;
    if(x==0)
    count++;
    
    }
    return(count);
}
/*Thank you
BMC BIT-1st sem
*/