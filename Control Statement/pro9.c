// Use nested if to find the smallest among three number
#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter Number1: ");
    scanf("%d", &num1);
    printf("Enter Number2: ");
    scanf("%d", &num2);
    printf("Enter Number3: ");
    scanf("%d", &num3);
    
    if (num1 < num2)
    {
        if (num1 < num3)
        {
            printf("Number %d is smaller", num1);
        }
    }
    if (num2 < num1)
    {
        if (num2 < num3)
        {
            printf("Number %d is smaller", num2);
        }
    }
    if (num3 < num1)
    {
        if (num3 < num2)
        {
            printf("Number %d is smaller", num3);
        }
    }
    return 0;
}