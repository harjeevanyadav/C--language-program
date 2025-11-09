// write a program to check if both numbers are even using logical operators.
#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter num1: ");
    scanf("%d",&num1);
    printf("Enter num2: ");
    scanf("%d", &num2);

    if(num1%2==0&&num2%2==0)
    {
        printf("Both Numbers Are Even ");
    }
else
{
    printf("One Even and One odd ");
}
    return 0;
}