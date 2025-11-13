/*Q5.

Print a right-aligned triangle of stars (5 rows):
        *
      * *
    * * *
  * * * *
* * * * *
*/
#include<stdio.h>

int main()
    {
        for (int i = 1; i <= 5; i++)
        {
            for (int j = 5; j>i; j--)
            {
                printf("  ");
            }
            for (int j=1; j<=i; j++)
            {
                printf("* ");
            }

                printf("\n");
        }
        return 0;
    }