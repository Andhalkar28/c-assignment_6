// 3. Write a for Linear Search, which accepts an array of n elements and a key as parameters and returns the position of key in the array and -1 if the key is not found. Accept n numbers from the user, store them in an array. Accept the key to be searched and search it using this function. Display appropriate messages.
#include <stdio.h>
int main()
{
    int n, i, a[50], key, flag;
    printf("Enter Size Of ARRAY:");
    scanf("%d", &n);

    printf("\n Enter Data In %d Size ARRAY:", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\n Enter KEY to Search :");
    scanf("%d", &key);

    flag = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            flag = 1;
            break;
        }
    }

    if (flag = 1)
        printf("\n Element %d Found At %d index Which Is Position %d :", key, i, i + 1);

    else
        printf("\n Element NOT FOUND !!! ");

    return 0;
}
