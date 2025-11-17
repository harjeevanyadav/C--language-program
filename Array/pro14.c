// reverse array
#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5];
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        b[i] = a[4 - i];
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            a[i] = b[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}