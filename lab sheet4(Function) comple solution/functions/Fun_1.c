
/*Write a program to accept two numbers perform addition,subtration,multiplication,division
between them using userdifined function called add(),sub(),div() and mul().*/
#include<stdio.h>
#include<conio.h>
void add(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);
void main(){
    int a,b;
    printf("Enter the two number:");
    scanf("%d %d",&a,&b);
    add(a,b);
    sub(a,b);
    mul(a,b);
    div(a,b);
    getch();

}
void add(int x,int y){
    int z; 
    z=x+y;
    printf("The addition between two number is %d\n\n",z);
}

void sub(int x,int y){
    int z;
    z=x-y;
    printf("The subtraction between two number is %d\n\n",z);
}
void mul(int x,int y){
    int z;
    z=x*y;
    printf("The multiplication between two number is %d\n\n",z);
}
void div(int x,int y){
    int z;
    z=x/y;
    printf("The division between two number is %d\n\n",z);
}
/*Thank you
BMC BIT-1st sem
*/