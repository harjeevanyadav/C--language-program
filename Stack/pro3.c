#include <stdio.h>
#define SIZE 10
int top = -1, stk[SIZE], temp[SIZE];
void push();
void disp();
void peep();
int main()
{
    int ch;
    do
    {
        printf("press 1 for Push:\n");
        printf("press 2 for Display:\n");
        printf("press 3 for peep:\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            disp();
            break;
        case 3:
            peep();
            break;
        default:
            ch = 0;
            break;
        }
    } while (ch != 0);
    return 0;
}
void push()
{
    int data;
    if (top >= SIZE - 1)
    {
        printf("\nStack is not empty:\n");
    }
    else
    {
        top++;
        printf("enter value:");
        scanf("%d", &data);
        stk[top] = data;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is Empty:");
    }
    else
    {
        printf("Poped elements = %d\n", stk[top]);
        stk[top] = 0;
        top--;
    }
}

void disp()
{
    int temp;
    temp = top;
    if (temp == -1)
    {
        printf("stack is empty:");
    }
    else
    {
        // while (temp > -1)
        // {
        //     printf("%d\n", stk[temp]);
        //     temp--;
        // }
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stk[i]);
        }
    }
}
void peep()
{
    int n, dup = top;
    if (top == -1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("enter choice for delete on that position:\n");
        scanf("%d", &n);
        if (top - n + 1 < 0 || top - n + 1 > SIZE)
        {
            printf("Invalid Choice:");
        }
        else
        {
        do{
            temp[top]=
        }
    }
}