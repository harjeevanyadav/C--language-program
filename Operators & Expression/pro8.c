//write a program to calculate the remainder and quotient of two integers
#include <stdio.h>
int main()
{
    int num1,num2;
    //take inpute
    printf("Enter num1: ");
    scanf("%d",&num1);
    printf("Enter num2: ");
    scanf("%d", &num2);
// formula 

printf("Quotient:%d\n",num1/num2);
printf("Remainder:%d\n", num1 % num2);
return 0;
}