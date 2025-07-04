// 10. Write a program to accept n numbers in the range of 1 to 25 and count the frequency of occurrence of each number.
#include <stdio.h>
int main()
{
    int n, i, a[50], freq[26] = {0};
    printf("Enter Size Of Array :");
    scanf("%d", &n);

    printf("Enter Data In %d Size ARRAY (Data Must Be In Range Of Numbers 1 to 25 Only):", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] >= 1 && a[i <= 25])
            freq[a[i]]++;
    }
    printf("\n Frequencies :");
    for (i = 1; i < 25; i++)
    {
        if (freq[i] > 0)
            printf("\n %d __ %d Times", i, freq[i]);
    }
    return 0;
}
