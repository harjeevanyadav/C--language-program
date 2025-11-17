#include<stdio.h>
int main()
{
  int a[2][2];
  int b[2][2];
      printf("enter an array A:");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }  
    int d=((a[0][0]*a[1][1])-(a[0][1]*a[1][0]));
 a[0][0]=a[0][0]+a[1][1];
 a[1][1]=a[0][0]-a[1][1];
 a[0][0]=a[0][0]-a[1][1];

 a[0][1]=-a[0][1];
 a[1][0]=-a[1][0];

     for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
           printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}