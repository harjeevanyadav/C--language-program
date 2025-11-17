// Swaping without using any operator
#include<stdio.h>
#include<malloc.h>
int main()
{
    int *p,n,sum;
    p=(int*)malloc (2*sizeof(int));
    printf("enter two value and i will swap them:");
    for(int i=0;i<2;i++)
    {
        scanf("%d",&n);
        *(p+i)=n;
    }
    *(p+1)=*p;
    *p=n;
    for(int i=0;i<2;i++)
    {
      printf("%d\n",*(p+i));
    }
    return 0;
  }