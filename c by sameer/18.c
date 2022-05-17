//@sameer nyapu
//WAP to input the marks of 100 students and find the highest and the lowest marks
#include<stdio.h>
#include<conio.h>
void main(){

    int n[100],i,l,h=0;
    printf("enter the marks of the students:");
    for(i=0;i<100;i++){
        scanf("%d",&n[i]);
    }
    for(i=0;i<100;i++){
        if(n[i]>h){
            h=n[i];
        }
        if(n[i]<l){
            l=n[i];
        }
    }
    printf("highest marks is %d",h);
    printf("lowest marks is %d",l);
}
//thank you 