// inpute marks and check if student passed (marks>=40) using logical operator.
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter Marks: ");
    scanf("%d", &marks);

    if (marks<=100)
    {
         if(marks <= 100 && marks >= 80)
        {
            printf("Excellent marks");
        }
        else if (marks<80 && marks>=60)
        {
            printf("Good marks");
        }
        else if (marks<60 && marks >= 40)
        {
            printf("pass");
        }
        else
        {
            printf("Sorry You Faild !");
        }
    }else
    {
        printf("invalid marks");
    }

    printf("Thank You for Enter marks !");

    return 0;
}