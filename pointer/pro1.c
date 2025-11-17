// Pointer Introduction
#include<stdio.h>
int main()
{
	int *p;
	int a=10;
	char ch='a';
	float f=30.3;
	p=&a;
    p=&ch;
    printf("%d",p);//%d for decimal value
	printf("%u\n",p);//%u for +ve address 
    printf("%x\n",p);// ...%x for hexadecimal form 6digit
	printf("%p\n",p);//...%p for hexadecimal but in 16 digit
    printf("%u",*p);//...point directly to the value of that address.
    printf("%d",*p);
    return 0;
}