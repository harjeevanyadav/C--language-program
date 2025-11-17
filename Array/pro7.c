// Insert new element in any array position
#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int pos;
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n ", a[i]);
    }
    printf("Enter the position to insert new element on that position:");
    scanf("%d", &pos);
    if (pos < 0 || pos > n)
    {
        printf("Invalid position!\n");
    }
    else
    {
        int newelement;
        printf("Enter the new element:");
        scanf("%d", &newelement);
        // n++;
        // shift elements to the right
        // for (int i = 4; i >= pos; i--)
        // {
        //     a[i + 1] = a[i];
        // }
        for (int i = n; i >= pos; i--)
        {
            a[i] = a[i-1];
        }
        a[pos] = newelement;
        for (int i = 0; i < 6; i++)
        {
            printf("%d\n ", a[i]);
        }
    }
    return 0;
}