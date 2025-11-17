// Bubble sort in c using Pointer
#include <stdio.h>
int main()
{
    int a[5]={5,4,3,2,1};
    int *p=a;
    int i,j,temp;
    int n=5;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i-1;j++)
        {
            if(*(p+j)>*(p+j+1))
            {
                temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",*(p+i));
    }
}