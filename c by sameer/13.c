//@sameer nyapu
//WAP to input any 50 numbers and count how many are prime numbers
#include<stdio.h>
#include<conio.h>
void main(){

    int num[50],j,i,count=0; //code to declare array and variables
    int c1=0;
    printf("Enter 50 numbers:");
    for(i=0;i<5;i++){
        scanf("%d",&num[i]);

    }
    for(i=0;i<5;i++){
        if(num[i]%i==0){
            count++;
        }

    }
    if(count==2){
     c1++;
    }
    printf("%d",c1);
}