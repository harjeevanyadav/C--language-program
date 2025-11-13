// Check if a number is palindrome or not.
#include<stdio.h>

int main()
{
    int num1,rev,rem,temp=0;
    printf("Enter a number: ");
    scanf("%d", &num1); 
    temp=num1;
    while (num1 != 0)
    {
        rem=num1%10;
        rev=rev*10+rem;
        num1=num1/10;
    }
    if(temp==rev){
        printf("The number is a palindrome.\n");
    }
    else{
        printf("The number is not a palindrome.\n");
    }


     return 0;
}