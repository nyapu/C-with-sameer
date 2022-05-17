//@sameer nyapu
//WAP to input the marks of n number  of students and sort them in ascending order
#include<stdio.h>
#include<conio.h>
void main(){


int marks[100],i,j,n,temp;  // code to declare array and variables
printf("Enter the number of students:");
scanf("%d",&n);
printf("Enter the marks of %d students:",n);
for(i=0;i<n;i++){
    scanf("%d",&marks[i]);
}
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(marks[i]>marks[j]){
            temp=marks[i];
            marks[i]=marks[j];
            marks[j]=temp;
        }
    }
}
printf("ascending order for marks of students are:\n");
for(i=0;i<n;i++){
    printf("%d\t",marks[i]);
}
}