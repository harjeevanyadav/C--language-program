//write a programe swap of two number using temparery veriable.
#include <stdio.h>

int main ()
{
    //Enter number by User

int a,b,temp=0;
printf("Enter the Value of A: ");
scanf("%d", &a);
printf("Enter the Value of B: ");
scanf("%d", &b);

  //swap of number
printf("\nAfter Swaping of Number\n");
temp=a;
a=b;
b=temp;

//print value a,b .
printf("A: %d\n",a);
printf("B: %d", b);
return 0;
}