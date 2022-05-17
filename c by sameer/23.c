//@sameer nyapu
//WAP to input mobile number of any 50 students in a class.Then ,ask the user to input a mobile number and find it is in the contact list or not.

//note you can store mobile number upto 8 digits
#include<stdio.h>
#include<conio.h>
#define N 1000;
void main(){
int mb[100],i,j,n,sr;
char found;
printf("\nEnter the mobile no of 50 students:");
for(i=0;i<4;i++){
    scanf("%d",&mb[i]);
}
printf("The mobile numbers enter by users are:");
for(i=0;i<4;i++){
    printf("%d\t",mb[i]);
}

printf("\nEnter the mobile number you want to search:");
scanf("%d",&sr);
for(i=0;i<4;i++){
    if(mb[i]==sr){
        found='y';
        break;
    }
}
if(found=='y'){
    printf("yes,this %d number is present in this list",sr);
}
else{
    printf("sorry,this %d number is not present in this list",sr);
}
}