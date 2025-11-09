// check if a number is positive ,negative or,zero using conditional operator
#include <stdio.h>
int main()
{
    int a;
    // take inpute
    printf("Enter Any Number: ");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("Positive Number");
    }
    else if (a < 0)
    {
        printf("Negative Number");
    }
    else
    {
        printf("Zero");
    }

    printf("\nThank you !");

    return 0;
}