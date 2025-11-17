// Generic pointer working
#include<stdio.h>
int main()
{
	void *p;//do not work directly for anyone
	int a=10;
	char ch='a';
	float f=30.3;
	p=&a;
   
    printf("%d",*(int*)p);//...%d for decimal value
	p=&ch;
    printf("%ch\n",*(char*)p);
    p=&f;
    printf("%f\n",*(float*)p);
    return 0;
}