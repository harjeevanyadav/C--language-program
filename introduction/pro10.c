// write a programe to inpute a float number and print it up two decimal numbers .
#include <stdio.h>

int main()
{
float num;

    printf("Enter Decimal Number: \n");
    scanf("%f",&num);
    printf("print it up two decimal Number:%.2f", num);
    return 0;
}