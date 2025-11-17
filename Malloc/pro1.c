// Introduction to malloc, calloc, realloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    int n;
    printf("enter size of the array you want to create");
    scanf("%d",&n);
    // Malloc Use
    p = (int*) malloc(5*sizeof(int));
    for(int i=0;i<3;i++)
    {
        printf("Enter the value no. %d of this array\n",i);
        scanf("%d",&p[i]);
    }
    for(int i=0;i<3;i++)
    {
        printf("The value at %d of this array is %d\n",i,p[i]);
    }

    // Calloc Use
    p = (int*) calloc(n,5*sizeof(int));
    for(int i=0;i<3;i++)
    {
        printf("Enter the value no. %d of this array\n",i);
        scanf("%d",&p[i]);
    }
    for(int i=0;i<3;i++)
    {
        printf("The value at %d of this array is %d\n",i,p[i]);
    }

    // Realloc Use
     printf("enter resize of the array you want to create");
    scanf("%d",&n);
     p = (int*) realloc(p,5*sizeof(int));
    for(int i=0;i<3;i++)
    {
        printf("Enter the value no. %d of this array\n",i);
        scanf("%d",&p[i]);
    }
    free(p);
    for(int i=0;i<3;i++)
    {
        printf("The value at %d of this array is %d\n",i,p[i]);
    }

    // Free use
    free(p);
    return 0;
}