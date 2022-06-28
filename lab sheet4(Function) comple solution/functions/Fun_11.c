/* WAP to  find the sum of first twenty natural numbers using function.*/
#include<stdio.h>
#include<conio.h>
int sum(int);
void main(){

    int a,Num;
    a=20;
    Num=sum(a);
    printf("The sum of first twenty natural number is %d",Num);
    getch();
}
int sum(int n){
    int i,add=0;
    for(i=1;i<=n;i++){
        add=add+i;
    }
    return(add);
}
/*Thank you
BMC BIT-1st sem
*/