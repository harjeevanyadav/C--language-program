#include <stdio.h>
#define SIZE 10

int f = -1, r = -1, que[SIZE];

void insert();
void delete();
void show();

int main()
{
    int ch;
    do
    {
        printf("press 1 for insert:\n");
        printf("press 2 for show:\n");
        printf("press 3 for Delete:\n");
        printf("Enter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            show();
            break;
        case 3:
            delete();
            break;
        default:
            ch = 0;
            break;
        }
    } while (ch != 0);
    return 0;
}
void insert()
{
    int data;
    printf("Enter Data:");
    scanf("%d", &data);
    if (r >= SIZE - 1)
    {
        printf("\nQueue is not Empty\n");
    }
    else
    {
        r++;
        que[r] = data;
        if (f == -1)
        {
            f = 0;
        }
    }
}
void show()
{
    int i;
    if (r == -1)
    {
        printf("\nQueue is Empty\n");
    }
    else
    {
        for (i = f; i <= r; i++)
        {
            printf("%d\t", que[i]);
        }
    }
}
void delete()
{
    if (f == -1)
    {
        printf("\nQueue is Empty\n");
    }
    else
    {
        que[f] = 0;
        if (f == r)
        {
            f = -1;
            r = -1;
        }
        else
        {
            f = f + 1;
        }
    }
}