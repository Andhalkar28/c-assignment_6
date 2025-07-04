// 14. Write a program to accept n numbers and store all prime numbers in an array called prime. Display this array.
#include <stdio.h>
int main()
{
    int n, i, j, p = 0, count, a[50], prime[50];
    printf("Enter Size Of ARRAY:");
    scanf("%d", &n);

    printf("\n Enter Data In %d Size ARRAY:", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        count = 0;
        if (a[i] <= 1)
            continue;

        for (j = 2; j < a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                count = 1;
                break;
            }
        }
        if (count == 0)
        {
            prime[p++] = a[i];
        }
    }

    printf("\n Prime Number Are :");
    for (i = 0; i < p; i++)
        printf("%d ", prime[i]);

    return 0;
}
