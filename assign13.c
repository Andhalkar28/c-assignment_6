// 13. Write a program to store even & odd elements of an array in two separate arrays.
#include <stdio.h>
int main()
{
    int n, i, e = 0, o = 0, a[50], even[50], odd[50];
    printf("Enter Size Of ARRAY:");
    scanf("%d", &n);

    printf("\n Enter Data In %d Size ARRAY:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] % 2 == 0)
            even[e++] = a[i];
        else
            odd[o++] = a[i];
    }
    printf("\n EVEN Numbers :");
    for (i = 0; i < e; i++)
        printf("\n %d ", even[i]);

    printf("\n ODD Numbers :");
    for (i = 0; i < e; i++)
        printf("\n %d ", odd[i]);
    return 0;
}
