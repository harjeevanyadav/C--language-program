//find the maxium of three number using nested ternary operator
#include <stdio.h>
int main()
{
int a,b,c;
//take inpute
 printf("Enter A value: ");
 scanf("%d",&a);
 printf("Enter B value: ");
 scanf("%d", &b);
 printf("Enter C value: ");
 scanf("%d", &c);
//check condition
if (a>b && a>c)
{
    printf("A is largest Number");
}
else if (b>a&&b>c)
{
    printf("B is largest Number");
}else if (c>a&&c>b)
{
    printf("C is largest Number");
}
 return 0;
}