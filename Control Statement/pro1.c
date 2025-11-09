// write a program to check if a number is positive or negative
#include<stdio.h>

int main(){
    int num1;
    printf("Enter number : ");
    scanf("%d",&num1);
    if (num1>0)
    {
        printf("positive Number");
    }
    else
    {
        printf("Negative Number");
    }

     return 0;
}