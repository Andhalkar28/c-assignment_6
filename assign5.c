/*5. Write a program to accept n numbers and store in an array. Perform following
operation on array using switch case. (Use Function for each operation)
a. Print Array elements
b. Calculate Average of Array elements
c. Find Max of Array
d. Search an element in Array
e. Count Occurrence of an element in Array */
#include <stdio.h>
int main()
{
    int n, i, j, op, a[100];
    int max, min, sum = 0, key, flag = 0, temp, cnt;

    printf("Here's A Menu Driven Program for Array:");

    printf("\n first tell the length of ARRAY :");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Enter a valid Number !!"); // if user enters -ve value for that weve used return 0 so that prog will not be get executed forwrd !
        return 0;
    }

    printf("\n Enter Data Of Capacity %d In Your Array :", n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\n Now Choose Between Cases :");
    printf("\n Cases :- \n 1.Display Array  \n 2.Average Of Array Element \n 3.Maximum Num In Array \n 4.Sorting Array \n 5.Linear Search ");
    printf("\n Enter your choice Of Case ? :");
    scanf("%d", &op);

    switch (op)
    {
    case 1:

        printf("\n Displaying Array :");

        for (i = 0; i < n; i++)
            printf("\n %d  ", a[i]);

        break;

    case 2:
        printf("\n Displaying Average Of Sum Of Num Present In Array :");

        for (i = 0; i < n; i++)
            sum += a[i];

        printf("\n the Avg Is :%.2f  ", (float)sum / n);
        break;

    case 3:
        printf("\n Displaying Maximum Num Array :");
        max = a[0];
        for (i = 0; i < n; i++)
        {
            if (max < a[i])
                max = a[i];
        }
        printf("\n max is :%d  ", max);
        break;

    case 4:

        printf("\n Enter element to search In Array :");
        scanf("%d", &key);

        for (i = 0; i < n; i++)
        {
            if (key == a[i])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
            printf("found");
        else
            printf("not found");
        break;

    case 5:
        cnt = 0;
        printf("\n Enter The Element To Count :");
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

        break;

    default:
        printf("Invalid");
        break;
    }

    printf("\n \n thanks !");
    return 0;
}
