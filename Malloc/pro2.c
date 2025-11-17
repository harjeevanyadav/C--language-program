#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,sum=0;
    // Calloc Working
    printf("enter the size\n");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",p+i);
        sum=sum+*(p+i);
    }
    printf("%d\n",sum);
// Realloc Working
    printf("enter the resize\n");
    scanf("%d",&n);
    p=(int*)realloc(p,n*sizeof(int));//P for in which we have to resize
    for(int i=0;i<n;i++)
    {
        scanf("%d",p+i);
        sum=sum+*(p+i);
    }

}