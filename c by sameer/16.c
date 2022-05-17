//@ sameer nyapu
// WAP to input anyy 50 nubers and find the biggest number
#include<stdio.h>
#include<conio.h>
void main(){

int n[50],i,large=0;
printf("Enter the 50 numbers:");
for(i=0;i<50;i++){
    scanf("%d",&n[i]);
}
for(i=0;i<50;i++){
    if(n[i]>large){
        large=n[i];
    }
}
printf("the largest number is %d",large);
}
//thank you