// Linear Search Operation
#include<stdio.h>
int main()
{
    int a[10],i,n,t=0;
    for(i=0;i<10;i++)
    {
        printf("\nValue= ");
        scanf("%d",&a[i]);
    }
    printf("\nEnter value to search:");
    scanf("%d\n",&n);
    for(i=0;i<10;i++)
    {
        if(n==a[i])
        {
            t=1;
        }
    }
    if(t==1)
    {
        printf("value found");
    }
    else{
        printf("value not found");
    }
    return 0;
}