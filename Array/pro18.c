#include<stdio.h>
int main()
{
    int a[3][3];
       for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==0 && j>=2 || i==0 && j==1 || i==1 && j==2)
            {
                printf(" *");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}