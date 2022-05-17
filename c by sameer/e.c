#include <stdio.h>
#include <conio.h>
void main()
{
    int s[30], i, j, ok, n;
    printf("enter the array:");
    scanf("%d", &n);
    printf("enter the marks of %d students:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &s[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (s[i] > s[j])
            {
                ok = s[i];
                s[i] = s[j];
                s[j] = ok;
            }
        }
    }
    printf("order is :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d", s[i]);
    }
}