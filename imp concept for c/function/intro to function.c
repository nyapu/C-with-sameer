#include<stdio.h>
#include<conio.h>
void main(){
/*

There are four categories to define a Functions
(i)  Without return type without argument
(ii) Without return type with argument
(iii) With return type with argument
(iv) With return type without argument
*/

/*
(i) Without return type without argument
 #include<stdio.h>
 #include<conio.h>
 void add(void); //function prototype or function decleration
 void main(){
     add(); //function call

 }
 void add(void){  //function definaton
     int a,b,c;
     printf("Enter the value of a and b :");
     scanf("%d %d",&a,&b);
     c=a+b;
     printf("the sum of a and b is %d",c);
 }
 
 */
/*
(ii) without return type with argument
#include<stdio.h>
 #include<conio.h>
 void add(int,int); // or also void add(int x,int y);
 void main(){
     int a,b;
     printf("Enter the value of a and b:");
     scanf("%d %d",&a,&b);
     add(a,b);

 }
 void add(int x,int y){
     int z;
     z=x+y;
     printf("the sum  is %d",z);
 }

*/
/*
(iii)with return type with argument
#include<stdio.h>
 #include<conio.h>
 int add(int x,int y);
 void main(){
     int a,b,sum;
     printf("Enter the value of a and b:");
     scanf("%d %d",&a,&b);
     sum=add(a,b);  //function call
     printf("the sum is %d",sum);

 }
 int add(int x,int y){
     int z;
     z=x+y;
     return(z);
 }

*/
/*
(iii)with return type without argument
#include<stdio.h>
 #include<conio.h>
 int add();
 void main(){
     int sum;
     sum=add();
     printf("the sum is %d",sum);

 }
 int add(){
     int x,y,z;
     printf("Enter x and y");
     scanf("%d %d",&x,&y);
     int z;
     z=x+y;
     return(z);
 }

*/


//THANK YOU FOR READING




}