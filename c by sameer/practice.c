#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{

    int arr[100], ch;
    int n, i, m, pos;
    do
    {
        system("cls");
        printf("\n******WELCOME TO SAMEER SMALL PROJECT*****");
        printf("\n\t1.Insert Data");
        printf("\n\t2.Display Data");
        printf("\n\t3.Add Data");
        printf("\n\t4.Count Data");
        printf("\n\t5.Search by position");
        printf("\n\t6.Update by position");
         printf("\n\t7.Delete by position");
        printf("\n\t0.Exit");
        printf("\n**************");
        printf("\nEnter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter the numbers of students:");
            scanf("%d", &n);
            printf("\nEnter the marks of %d students:", n);
            
            for (i = 0; i < n; i++)
            {
                printf("Enter marks:");
                scanf("%d", &arr[i]);
            }
            printf("\n");
            break;
        case 2:
            printf("\nThe marks obtained by students are:");
            for (i = 0; i < n; i++)
            {
                printf("%d\t", arr[i]);
            }
            printf("\n");
            break;
        case 3:
            printf("\nEnter the numbers of students");
            scanf("%d", &m);
            printf("\nEnter the marks of %d students:", m);
            for (i = n; i < n + m; i++)
            {
                printf("Enter marks:");
                scanf("%d", &arr[i]);
            }
            n = n + m;
            printf("\n");
            break;
        case 4:
            printf("\nThe total no. of Data is:%d", n);
            printf("\n");
            break;
        case 5:
            printf("\nEnter the position of data:");
            scanf("%d", &pos);
            if (pos > n)
            {
                printf("position must be less than or equal to %d", n);
            }
            else
            {
                printf("Element at %d position =%d", pos, arr[pos - 1]);
            }
            break;

        case 6:
            printf("\nEnter the position to update data:");
            scanf("%d", &pos);
            if (pos > n)
            {
                printf("position must be less than or equal to %d", n);
            }
            else
            {
                printf("Element at %d position =%d", pos, arr[pos - 1]);
                printf("\nEnter a new number:");
                scanf("%d", &arr[pos - 1]);
                printf("Element at %d position =%d", pos, arr[pos - 1]);
            }
            break;
            case 7:
             printf("\nEnter the position to Delete the data:");
            scanf("%d", &pos);
            if (pos > n)
            {
                printf("position must be less than or equal to %d", n);
            }
            else
            {
                printf("%d is Deleted Successfully....!",arr[pos-1]);
  
               for(i=pos-1;i<n-1;i++){
                   arr[i]=arr[i+1];
               }
               n--;
            }
            break;
        }
      
        system("pause");
    } while (ch != 0);
}