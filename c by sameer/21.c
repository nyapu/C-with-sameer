//@sameer nyapu
//WAP to input any 10 number in an array and sort them in desending order
#include<stdio.h>
#include<conio.h>
void main(){
    int s[100],i,j,n,temp;
    printf("Enter the number of students:");
    scanf("%d",&n);
    printf("Enter the marks of %d students:",n);
    for(i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(s[i]<s[j]){
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    printf("desending order is");
    for(i=0;i<n;i++){
        printf("%d\t",s[i]);
    }
}
//thank you