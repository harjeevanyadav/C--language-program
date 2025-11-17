
// // Prime Number program
// #include <stdio.h>
// int main()
// {
//     int a[5];
//     int m = 0;
//     printf("Enter 5 elements in array\n");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int n = sizeof(a) / sizeof(a[0]);
//     for (int i = 0; i < n; i++)
//     {
//         m = 0;
//         for (int j = 2; j <= i; j++)
//         {
//             // if (a[i] == 1)
//             // {
//             //     printf("No. is not prime%d\n", a[i]);
//             // }
//             if (a[i] % j == 0)
//             {
//                 m++;
//             }
//             else
//             {
//                 printf("No. is not prime%d\n", a[i]);
//             }
//         }
//         if (m == 1)
//         {
//             printf("No. is prime%d\n", a[i]);
//         }
//     }
// }

// Prime Number in array program using function
#include <stdio.h>
void isprime(int a[], int n)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 2; j < a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                printf("No. is not prime %d\n", a[i]);
                break;
            }
            else
            {
                printf("No. is prime %d\n", a[i]);
                break;
            }
        }
    }
}
int main()
{
    int a[5];
    printf("Enter 5 elements in array\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    int n = sizeof(a) / sizeof(a[0]);
    isprime(a, n);
}