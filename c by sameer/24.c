//@sameer nyapu
//WAP to read symbol no. of the 'n' number of successful candidates in an entrnce exam 
//then your program should prompt the use to enter a symbol no. and seearch /find the symbol no. entered by the user,
//list of sucessful candidates or not

#include<stdio.h>
#include<conio.h>
# define N 1000;
void main(){

    int sn[10],n,i,j,sr;  //code to declare array and variables

    char found;
    printf("\nEnter the value of 'n' i.e totoal number of successful students");
    scanf("%d",&n);
    printf("\nenter the symbol no. of the successful candidate in the entrance exam ");
    for(i=0;i<n;i++){
        scanf("%d",&sn[i]);
    }
    printf("\n");
    printf("the symbol no . of successful candiated are:");
    for(i=0;i<n;i++){
        printf("%d\t",sn[i]);
    }
printf("\n");
    //code to input symbol no to search
    printf("Enter the symbol no. which you want to search:");
    scanf("%d",&sr);
    //code to search
    for(i=0;i<n;i++){
        if(sn[i]==sr){
            found='y';
            break;
        }
 
    }

    if(found=='y'){

        printf("yes, the symbol no. %d is in the list of successful students ",sr);

    }
    else{
        printf("sorry  symbol no. %d is not found in the list of successful students ",sr);
    }
}
//thank you