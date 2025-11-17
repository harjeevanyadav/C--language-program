// Pointer using Array
#include<stdio.h>
int main()
{
    int *p;
    int a[]={1,2,3,4,5};
    p=a;//Zero index ke address ko point karega
    for(int i=0;i<5;i++)
    {
        printf("%d\n",p+i);
    }
       p=a;
        for(int i=0;i<5;i++)
    {
        printf("%d\n",*(p+i));//now we get the value of that index
    }
    return 0;
}