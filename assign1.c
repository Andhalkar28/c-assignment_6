// 1. Write a program to accept n numbers and store in an array. Calculate Sum and Average of n numbers.
#include <stdio.h>
int main()
{
    int n, i, a[50], sum = 0;
    printf("Enter Size Of ARRAY:");
    scanf("%d",&n);

    printf("Enter Data In %d Size ARRAY:",n);
    for (i = 0; i < n; i++)
        scanf("%d",&a[i]);

    for (i = 0; i < n; i++)
        sum += a[i];

    printf("\n sum is :%d", sum);
    printf("\n Average is :%.2f", (float)sum / n);

    return 0;
}