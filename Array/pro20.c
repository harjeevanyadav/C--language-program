#include <stdio.h>
int main()
{
    int a[3][3];
    int count=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j && a[i][j] == 1)
            {
                if (i != j && a[i][j] == 0)
                {
                 count++;
                }
            }
        }
    }
    if(count==1)
    {
        printf("identity matrix:");
    }
    else{
        printf("not identity:");
    }
}