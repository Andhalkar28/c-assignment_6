// 2. Write a program to accept n numbers in an array and find the largest and smallest number.
#include <stdio.h>
int main()
{
    int n, i, a[50], max, min;
    printf("Enter Size Of ARRAY:");
    scanf("%d", &n);

    printf("Enter Data In %d Size ARRAY:", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = min = a[0];

    for (i = 0; i < n; i++)
    {
        if (a[i] > max) // optimised max=(a[i]>max) ?a[i]:max;
            max = a[i];

        if (a[i] < max)
            max = a[i];
    }
    printf("\n Maximum Number Is:%d", max);
    printf("\n Minimun Number Is:%d", min);

    return 0;
}