#include <stdio.h>
#define SIZE 10
int top = -1, stk[SIZE],temp[SIZE];
void push();
void disp();
void pop();
void peek();
void update();
void peep();

int main()
{
    int ch;
    do
    {
        printf("press 1 for Push:\n");
        printf("press 2 for Display:\n");
        printf("press 3 for Pop:\n");
        printf("press 4 for peek:\n");
        printf("press 5 for Update:\n");
        printf("press 6 for peep:\n");
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
            pop();
            printf("\nAfter poping values are:\n");
            disp();
            break;
        case 4:
            peek();
            break;
        case 5:
            update();
            break;
        case 6:
            peep();
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
void peek()
{
    int n;
    printf("Enter your choice: ");
    scanf("%d", &n);
    if (top == -1)
    {
        printf("Stack is empty:\n");
    }
    else
    {
        if (top - n + 1 < 0 || top - n + 1 > SIZE)
        {
            printf("invalid Choice: ");
        }
        else
        {
            printf("Data = %d\n", stk[top - n + 1]);
        }
    }
}
void update()
{
    int data,n;
    printf("enter your choice:\n");
    scanf("%d",&n);
       if (top == -1)
    {
        printf("Stack is empty:\n");
    }
    else
    {
        if (top - n + 1 < 0 || top - n + 1 > SIZE)
        {
            printf("invalid Choice: ");
        }
        else
        {

            printf("Enter new Data\n");
            scanf("%d",&data);
            stk[top-n+1]=data;
        }
    }
}
void peep()
{
    int n,i,ct=0;
    if(top==-1)
    {
        printf("stack is empty:");
    }else{
        if(n>=0 && n<=top+1)
        {
            for(i=0;top>n-1;i++)
            {
                temp[i]=stk[top];
                top--;
                ct++;
            }
            pop(top);
            for(i=ct;i>=0;i--)
            {
                top++;
                stk[top]=temp[i];
            }
            disp();
        }else{
            printf("try again:");
        }
    }
}