// 11. Write a program to find the largest two numbers in a given array.
#include <stdio.h>
int main()
{
    int n, i, a[50], max1, max2;
    printf("Enter Size Of ARRAY:");
    scanf("%d", &n);

    printf("Enter Data In %d Size ARRAY:", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    if (n < 2)
    {
        printf("\n At Least Tw Number Are Required :");
        return 0;
    }
    if (a[0] > a[1])
    {
        max1 = a[0];
        max2 = a[1];
    }
    else
    {
        max1 = a[1];
        max2 = a[0];
    }

    for (i = 2; i < n; i++)
    {
        if (a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }
        else if (a[i] > max2 && a[i] != max1)
        {
            max2 = a[i];
        }
    }
    printf("\n Largest Number Is :%d", max1);
    printf("\n Second Largest Number Is :%d", max2);

    return 0;
}