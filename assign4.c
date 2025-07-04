// 4. Write a function, which accepts an integer array and an integer as parameters and counts the occurrences of the number in the array
#include <stdio.h>
int main()
{
    int n, i, a[50], key, cnt;
    printf("Enter Size Of ARRAY:");
    scanf("%d", &n);

    printf("\n Enter Data In %d Size ARRAY:", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\n Enter KEY to Search :");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
            cnt++;
    }
    if (cnt == 0)
        printf("Not Found ");
    else
        printf("\n Count Of Occurance Of Key %d In Array Is :%d", key, cnt);

    return 0;
}