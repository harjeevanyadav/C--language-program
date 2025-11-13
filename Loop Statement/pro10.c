// Display the sum of even and odd numbers separately from 1 to N.
#include <stdio.h>

int main()
{
    int num, evenSum = 0, oddSum = 0;
    printf("Enter number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            evenSum += i;
        }
        else
        {
            oddSum += i;
        }
    }
    printf("Sum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers: %d\n", oddSum);

    return 0;
}
