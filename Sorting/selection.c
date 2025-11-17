// Selection Sorting
#include<stdio.h>
int main()
{
    int i,j,temp;
    int a[5];

    printf("Enter 5 Elements: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

      for (i = 0; i < 5; i++)
    {
        for (j = i; j < 4 ; j++)
        {
            if (a[i] > a[j + 1])
            {
                temp = a[i];
                a[i] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Sorting array as follows:\n");
    for (i = 0; i < 5; i++)
    {
        printf("element= %d\n", a[i]);
    }
    return 0;
}