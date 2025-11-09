// Print all even numbers between 1 and 50.
#include <stdio.h>

int main()
{
    int n = 50;
    printf("Even Number:\n");

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d", i);
        }
        printf(" ");
    }
    return 0;
}