// Count digits in a given number.
#include<stdio.h>

int main(){
    int num1, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num1);
    while (num1 != 0)
    {
        num1 = num1 / 10;
        count++;    
    }
    printf("Number of digits: %d\n", count);

     return 0;
}