// // Even element in the array
// #include<stdio.h>
// int main()
// {
//    int a[5]={1,2,3,4,4};
//    for(int i=0;i<5;i++)
//    {
//     if(a[i]%2==0)
//     {
//         printf("%d\n",a[i]);
//     }
//    }
// }

// Odd Array Program
// #include <stdio.h>
// int main()
// {
//     int a[5] = {1, 2, 3, 4, 4};
//     for (int i = 0; i < 5; i++)
//     {
//         if (a[i] % 2 != 0)
//         {
//             printf("%d\n", a[i]);
//         }
//     }
// }

//number of Even element in the array
#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 4};
    int n = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d\n", a[i]);
            n++;
        }
    }
    printf("%d\n", n);
}

// number of Odd element in Array Program
#include <stdio.h>
    int
    main()
{
    int a[5] = {1, 2, 3, 4, 4};
    int n = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] % 2 != 0)
        {
            printf("%d\n", a[i]);
            n++;
        }
    }
    printf("%d\n", n);
}

// number of positive element in the array
#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 4};
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > 0)
        {
            printf("number is positive\n");
        }
    }
}

// negative element Array Program
#include <stdio.h>
    int
    main()
{
    int a[5] = {1, 2, 3, 4, 4};
    for (int i = 0; i < 5; i++)
    {
        if (a[i] < 0)
        {
            printf("number is negative\n");
        }
    }
}

// number of positive element in the array
#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 4};
    int n = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > 0)
        {
            printf("number is positive\n");
            n++;
        }
    }
    printf("%d\n", n);
}

// number of negative element in Array Program
#include <stdio.h>
    int
    main()
{
    int a[5] = {1, 2, 3, 4, 4};
    int n = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] < 0)
        {
            printf("number is negative\n");
            n++;
        }
    }
    printf("%d\n", n);
}



// Prime Number program
#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 4};
    int m = 0;
    for (int i = 0; i < 5; i++)
    {
        m = 0;
        for (int j = 2; j <= i; j++)
        {
            if (a[i] == 1)
            {
                printf("No. is not prime\n", a[i]);
            }
            if (a[i] % j == 0)
            {
                m++;
            }
            else
            {
                printf("No. is not prime\n", a[i]);
            }
        }
        if (m == 1)
        {
            printf("No. is prime\n", a[i]);
        }
    }
}