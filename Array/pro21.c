// multiplication of matrices
#include<stdio.h>
int main()
{
    int a[2][2];
    int b[2][2];
    int c[2][2];
    int sum=0;
    printf("enter an array A:");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter an array B:");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            sum=0;
            for(int k=0;k<2;k++)
            {
                sum+= a[i][k]*b[k][j];
            }
          c[i][j]=sum;
           printf("%d ",c[i][j]);
        }   
        printf("\n");
    }
}