//@sameer nyapu
/*WAP  to input marks of any 40 students in a subjects and count how many students are passed in distinction,
first division ,second division ,third division and failed
      MARKS     DIVISION
      >=75      distinction
      >=60      first
      >=45      second
      >=35      third
      below 35    fail
*/
#include <stdio.h>
#include <conio.h>
void main()
{

    int num[40], i, count = 0; // code to declare variables and array
    int dist, firs, seco, thir, fail;
    printf("Enter the marks of 40 students:");
    for (i = 0; i < 40; i++)
    {
        scanf("%d", &num[i]);
    }
    dist = firs = seco = thir = fail = 0;
    for (i = 0; i < 40; i++)
    {
        if (num[i] >= 75)
        {
            dist++;
        }
        if (num[i] >= 60 && num[i] < 75)
        {
            firs++;
        }
        if (num[i] >= 45 && num[i] < 60)
        {
            seco++;
        }
        if (num[i] >= 35 && num[i] < 45)
        {
            thir++;
        }
        if (num[i] < 35)
        {
            fail++;
        }
    }
    printf("the total number of students got distinction are %d\n", dist);
    printf("the total number of students got first division are %d\n", firs);
    printf("the total number of students got second division are %d\n", seco);
    printf("the total number of student got third division are %d\n", thir);
    printf("the total number of students got failed are %d\n", fail);
}
// thank you
