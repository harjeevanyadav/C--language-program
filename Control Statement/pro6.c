// Write a menu-driven program using switch for
//1. Addition 2. Subtraction 3. Multiplication 4. Division.
#include<stdio.h>

int main(){
    int choice, num1,num2;
    printf("Enter first Number: ");
    scanf("%d",&num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);
printf("Enter Choice:\n1.Add\n2.sub\n3.Mult.\n4.Div.\n5.Remainder\n");
scanf("%d",&choice);
switch (choice)
{
case 1:
    printf("Add:%d",num1+num2);
    break;
case 2:
    printf("Sub:%d", num1 - num2);
    break;
case 3:
    printf("Mult:%d", num1 * num2);
    break;
case 4:
    printf("Div.:%d", num1 / num2);
    break;
case 5:
    printf("Remainder:%d", num1 % num2);
    break;
default:
    printf("invalide choice");
    break;
}
    return 0;
}