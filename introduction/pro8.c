// write a programe to print the ASCII value of a character enter by the user.
#include <stdio.h>

int main()
{
    char ch;
//take inpute by user 
    printf("Enter a number:\n");
    scanf("%c",&ch);
// shows the ACII value of number 
    printf("ASCII value %c is %d ",ch,ch);

    return 0;
}