//@sameer nyapu
//WAP  to input 50 numbers in an array and find the smallest number

#include<stdio.h>
#include<conio.h>
void main(){
    int n[50],i,small;
    printf("enter 50 numbers:");
    for(i=0;i<5;i++){
        scanf("%d",&n[i]);
    }
    for(i=0;i<5;i++){
        if(n[i]<small){
            small=n[i];
        }
    }
    printf("the smallest number is %d",small);
}
//thank you