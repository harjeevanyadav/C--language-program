// Input marks and print grade using else-if ladder.
#include <stdio.h>

int main()
{
    int marks;
    printf("Enter Your Marks: ");
    scanf("%d", &marks);
    if (marks <= 100)

    {
        if (marks >= 90)
        {
            printf("Grade: 'A'");
        }
        else if (marks >= 70)
        {
            printf("Grade: 'B'");
        }
        else if (marks >= 50)
        {
            printf("Grade: 'C'");
        }

        else if (marks >= 30)
        {
            printf("Grade: 'D'");
        }
        else
        {
            printf("Your failed");
        }
    }
    else
    {
        printf("Your are Invalide Marks Enter");
    }
    return 0;
}