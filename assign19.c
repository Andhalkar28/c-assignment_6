// 19. Write a program to remove all duplicate elements from an array.
#include<stdio.h>
int main()
{
    int n, i, j, k, a[100];
    printf("Enter count of number :");
    scanf("%d", &n);

    printf("now enter the data of count %d :", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n - 1; j++)
        {
            if (a[i] == a[j])
            {
                for (k = j; k < n - 1; k++)
                {
                    a[k] = a[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    printf("Array Afer Deletion Of Duplicate Element : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
