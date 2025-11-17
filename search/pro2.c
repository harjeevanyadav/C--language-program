// Binary Search Operation
#include<stdio.h>
void main()
{
    int x[20],n,a,b,first,last,mid,item,i,j,temp;

    printf("Enter size of array:\n");
    scanf("%d",&n);

    printf("Enter Array\n");
    for(a=0;a<n;a++)
    {
        scanf("%d",&x[a]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(x[j]>x[j+1])
            {
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }
    printf("Enter item for Search:\n");
    scanf("%d",&item);

    first=0,last=n-1;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(x[mid]==item)
        {
            printf("item found:\n");
            break;
        }
        if(item<x[mid])
        {
            last=mid-1;
        }else{
            first=mid+1;
        }
        if(first>last)
        {
            printf("item is not found");
        }
    }
}