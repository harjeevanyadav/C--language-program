// Class Works
// Pointer always Increase by its scale factor(byte)
#include<stdio.h>
int main()
{
    int *p;
    int a=10;
    p=&a;
    printf("%u\n",p);
    p=p+1;
    printf("%u\n",p);//Address 4byte se Increase hoga 1bar
    p=p+5;
    printf("%u\n",p);
    p=p-1;
    printf("%u\n",p);//Address 4byte se Decrease hoga 1bar
    p=p-5;
    printf("%u\n",p);
}