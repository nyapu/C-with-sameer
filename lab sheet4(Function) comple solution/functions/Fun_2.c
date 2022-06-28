/* WAP to find out the largest number among three numbers using userdefined function.*/

#include<stdio.h>
#include<conio.h>
int largest(int,int,int);
void main(){
    int a,b,c,greater;
    printf("\nEnter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    greater=largest(a,b,c);
    printf("The largest number is %d",greater);
    getch();
}
int largest(int x,int y,int z){
    if(x>y && x>z)
    return x;
    else if(y>x && y>z)
    return y;
    else{
        return z;
    }
}
/*Thank you
BMC BIT-1st sem
*/