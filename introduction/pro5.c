// write a programe to Add,Subtract,Multiply,Divide of two number.
#include <stdio.h>

int main()
{

    // take inpute
    int b, a;
    printf("Enter the value of A : ");
    scanf("%d", &a);
    printf("Enter the value of B : ");
    scanf("%d", &b);

    // print number
    printf("<-------Print given number is this------->\n");
    printf("A: %d\n", a);
    printf("A: %d\n", b);
    //sum of number
    printf("<-------Sum of Given number :------->\n");
    printf("%d\n", a + b);
    // sub of number
    printf("<-------Subtract of Given number :------->\n");
    printf("%d\n", a - b);

    printf("<-------Multiply of Given number :------->\n");
    printf("%d\n", a * b);

    printf("<-------Divide of Given number :------->\n");
    printf("%d\n", a / b);
    
    return 0;
}