//@ sameer nyapu
//WAP to input the height of n numbers in an array and display the height in shortest to tallest form
#include<stdio.h>
#include<conio.h>
void main(){
int hgt[100],n,i,j,temp;
printf("Enter the number of people:");
scanf("%d",&n);
printf("Enter the height of %d people:",n);
for(i=0;i<n;i++){
    scanf("%d",&hgt[i]);
}
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(hgt[i]>hgt[j]){
            temp=hgt[i];
            hgt[i]=hgt[j];
            hgt[j]=temp;
        }
    }
}
printf("The height in shortest to tallest form is ");
for(i=0;i<n;i++){
    printf("%d\t",hgt[i]);
}

}
//thankyou;