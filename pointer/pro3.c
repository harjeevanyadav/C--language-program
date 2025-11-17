// Pointer to pointer OR Double Pointer
#include<stdio.h>
int main()
{
    int *p,**q;
    int a=10;
    p=&a;
    q=&p;
    printf("%d",**q);
    return 0;
}