#include<stdio.h>
int main()
{
    // int *p,*q;
    int a[]={5,4,4343,55,66,33,777,45454,334,343,5,7878,22,89,88};
    int n=sizeof(a);
    printf("%d",n);
    int n=sizeof(a)/sizeof(a[0]);
    printf("%d",n);
    return 0;
}