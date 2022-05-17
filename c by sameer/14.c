//@sameer nyapu
//WAP  TO input any 50 numbers and count how many numbers are there which are exactly divisible by 7
#include<stdio.h>
#include<conio.h>
void main(){

    int num[50],i,count=0;
    printf("Enter the numbers :");
    for(i=0;i<50;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<50;i++){
        if(num[i]%7==0){
            count++;
        }
    }
    printf("the total number which are exactly divisible by 7 are: %d",count);
}
//thank you