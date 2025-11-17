// Minimum AND Maximum Element in an Array
// #include <stdio.h>
// int main()
// {
//     int a[] = {80, 90, 10, 60, 100};
//     int max = a[0];
//     int min = a[0];
//     for (int i = 0; i < 5; i++)
//     {
//         if (a[i] > max)
//         {
//             max = a[i];
//         }
//         if (a[i] < min)
//         {
//             min = a[i];
//         }
//     }
//     printf("min=%d\n", min);
//     printf("max=%d\n", max);
// }

// print maximum and 2nd maximum element in the array
// #include <stdio.h>
// int main()
// {
//     int a[] = {80, 90, 100, 110, 120};
//     int max = a[0];
//     int smax = a[0];
//     for (int i = 0; i < 5; i++)
//     {
//         if (a[i] > max)
//         {
//             smax = max;
//             max = a[i];
//         }
        
//         if (a[i] > smax && a[i] != max)
//         {
//             smax = a[i];
//         }
//     }
//     printf("max=%d\n", max);
//     printf("smax=%d\n", smax);
// }

// print Duplicate element from the array
#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4, 4};
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] == a[j])
            {
                printf("Element=%d\n", a[i]);
                count++;
            }
        }
    }
    printf("no. of Duplicate=%d\n", count);
}