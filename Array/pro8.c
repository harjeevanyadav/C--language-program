// Delete an element from specific position in an array
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
    printf("Enter the position to delete an element on that position:");
    scanf("%d", &pos);
    if (pos < 0 || pos > n)
    {
        printf("Invalid position!\n");
    }
    else
    {
        for (int i = pos; i < n; i++)
        {
            a[i] = a[i + 1];
        }
        n--;
        for (int i = 0; i < n; i++)
        {
            printf("%d\n ", a[i]);
        }
    }
    return 0;
}