// compare two  numbers using relational operators
#include <stdio.h>
int main()
{
int a , b;
    //take inpute
printf("Enter Value of A: ");
scanf("%d",&a);
printf("Enter Value of B: ");
scanf("%d", &b);

// relational operation
printf("a>b: %d\n", a > b);
printf("a<b: %d\n", a < b);
printf("a>=b: %d\n", a >= b);
printf("a<=b: %d\n", a <= b);
printf("a!=b: %d\n", a != b);
return 0;
}