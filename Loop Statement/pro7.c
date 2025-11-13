// Find the reverse of a number using a while loop.
#include<stdio.h>

int main(){
    int num1;
   printf("Enter a number: ");
    scanf("%d", &num1);
    while (num1 != 0)
    {
        int digit = num1 % 10;
        printf("%d", digit);
        num1 = num1 / 10;
    }
    
     return 0;
}