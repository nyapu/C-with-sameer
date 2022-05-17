//@sameer nyapu
/* WAP to display the following menu and prompt the user to input his/her choise and do the task accordingly
a.Input any two matrices of 2*2 size
b.Sum of the matrices
c.Difference of the matrices
d.Product of the matrices 
e.Quit
*/
#include<stdio.h>
#include<conio.h>
void main(){
int n,arr[100],i,j;
    int ch,m;
    do{
        system("cls");
printf("\n**************");
printf("\n1.Input any two matrix");
printf("\n2.Sum of the matrices");
printf("\n3.update data");
printf("\n4.product of the matrices");
printf("\n0.exit");
printf("\n**************");
printf("\nEnter your choice::");
scanf("%d",&ch);
switch (ch)
{
case 1:
printf("\nenter the no. of sutdents:");
scanf("%d",&n);
printf("Enter the marks of %d students\n",n);
for(i=0;i<n;i++){
    printf("enter marks:");
    scanf("%d",&arr[i]);

}
    break;


    case 2:
    printf("\nyour data is:");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    break;
case 3:

printf("Enter the number of students to update the marks\n");
scanf("%d",&m);
printf("\nEnter the marks of %d students",m);
for(i=n;i<n+m;i++){
    printf("enter marks:");
    scanf("%d",&arr[i]);

}
n=n+m;
    break;


default:
    break;
}
system("pause");
    }while(ch!=0);
    
}