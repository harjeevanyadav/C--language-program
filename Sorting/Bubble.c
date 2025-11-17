// Bubble Sorting
#include <stdio.h>
int main()
{
    int i, j, temp;
    int a[5];

    printf("Enter 5 Elements of Array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Sorting array as follows:\n");
    for (i = 0; i < 5; i++)
    {
        printf("element= %d\n", a[i]);
    }
    return 0;
}