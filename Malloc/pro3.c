// Uses of Malloc
#include<stdio.h>
#include<malloc.h>
int main()
{
    int *p,n,sum;
    p=(int*)malloc (10*sizeof(int));
    for(int i=0;i<10;i++)
    {
        scanf("%d",&n);
        *(p+i)=n;
    }
    for(int i=0;i<10;i++)
    {
        printf("value=%d\n",*(p+i));
        sum=sum+*(p+i);
    }
    free(p);//p ki memory ko destroy kar dega
    return 0;
}