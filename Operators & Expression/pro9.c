// inpute age and check if person is eligible to vote (age >=18).
#include <stdio.h>
int main()
{
    int age;
    printf("Enter Age: ");
    scanf("%d", &age);

    if (age>=18)
    {
        printf(" Eligible for vote ");
    }
    else
    {
        printf(" Not Eligible for vote ");
    }
    return 0;
}