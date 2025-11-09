// Input a number (1–7) and print the corresponding weekday using switch.
#include<stdio.h>

int main(){
    int choice;
    printf("Enter Number: 1.\n2.\n3.\n4.\n5.\n6.\n7.\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;

    default:
        printf("invalide Number");
        break;
    }

    printf("\nThank You for Enter Number");
    return 0;
}