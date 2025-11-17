#include <stdio.h>
#define SIZE 10
int f = -1, r = -1, que[SIZE];

void insert();
void show();
void delete();

int main()
{
    int ch;
    do
    {
        printf("\nPress 1 for Insert:\n");
        printf("Press 2 for Show\n");
        printf("press 3 for Delete\n");
        printf("Enter your Choice\n");
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
    if (r == SIZE - 1 && f == 0)
    {
        printf("\nQueue is not Empty:\n");
    }
    else
    {
        if (r == f - 1)
        {
            printf("\nQueue is empty:\n");
        }
        else
        {
            if (r == SIZE - 1)
            {
                r = 0;
                que[r] = data;
            }
            else
            {
                r = r + 1;
                que[r] = data;
                if (f == -1)
                {
                    f = 0;
                }
            }
        }
    }
}

void show()
{
    if (f == -1)
    {
        printf("\nQueue is Empty\n");
    }
    else
    {
        if (r < f)
        {
            for (int i = f; i <= SIZE - 1; i++)
            {
                printf("%d\t", que[i]);
            }
            for (int i = 0; i <= r; i++)
            {
                printf("%d\t", que[i]);
            }
        }
        else
        {
            for (int i = f; i <= r; i++)
            {
                printf("%d\t", que[i]);
            }
        }
    }
}

void delete()
{
    if (f == -1)
    {
        printf("\nQueue is Empty\n");
    }
    else if (f == r)
    {
        printf("\nDeleted Element = %d\n", que[f]);
        que[f] = 0;
        f = -1;
        r = -1;
    }
    else if (f == SIZE - 1)
    {
        printf("\nDeleted Element= %d\n", que[f]);
        que[f] = 0;
        f = 0;
    }
    else
    {
        printf("\nDeleted Element\n");
        que[f] = 0;
        f = f + 1;
    }
}