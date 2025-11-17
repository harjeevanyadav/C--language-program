// Write a program to perform right rotation on array with 3 elements.
#include <stdio.h>
void Right_Rotation(int a[],int n,int k)
{
   int temp;
   while(k>0)
   {
    k--;
    temp=a[n-1];
    for(int i=n-1;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=temp;
   }
}
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int k=3;
    int n = sizeof(a) / sizeof(a[0]);
    print(a,n);
    Right_Rotation(a,n,k);
    print(a,n);
}