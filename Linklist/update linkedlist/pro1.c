// update and search in single Linked list
#include <stdio.h>
#include <malloc.h>
struct update_list
{
    int data;
    struct update_list *next;
};
typedef struct update_list node;
node *start = NULL;

int num;
void create(node *);
void display(node *);
void update(node *);
void search(node *);

int main()
{
    int ch;
    do
    {
        printf("\npress 1 for create new node:\n");
        printf("press 2 for display:\n");
        printf("press 3 for update:\n");
        printf("press 4 for search:\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create(start);
            break;
        case 2:
            printf("created list as follows:\n");
            display(start);
            break;
        case 3:
            update(start);
            break;
        case 4:
            search(start);
            break;
        default:
            ch = 0;
            break;
        }
    } while (ch != 0);
    return 0;
}
void create(node *ptr)
{
    int ch;
    num = 0;
    if (start == NULL)
    {
        ptr = (node *)malloc(sizeof(node));
        start = ptr;
    }
    do
    {
        printf("Input the values of node:%d\n", (num + 1));
        scanf("%d", &ptr->data);

        printf("for continue press 1:\n");
        scanf("%d", &ch);
        if (ch == 1)
        {
            ptr->next = (node *)malloc(sizeof(node));
            ptr = ptr->next;
        }
        num++;
    } while (ch == 1);

    ptr->next = NULL;
    printf("Total nodes=%d", num);
}
void display(node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
void update(node *ptr)
{
    int node_no, ct = 1;
    printf("press node no. you want to update:");
    scanf("%d", &node_no);
    if (node_no <= num)
    {
        while (ct != node_no)
        {
            ptr = ptr->next;
            ct++;
        }
        printf("input data:\n");
        scanf("%d", &ptr->data);
    }
}
void search(node *ptr)
{
    int val;
    int ct = 1;
     if (start == NULL)
    {
        printf("list is empty:");
    }
    printf("Enter value you want to search:\n");
    scanf("%d", &val);
        while (val != ptr->data)
        {
            ptr = ptr->next;
            ct++;
        }
        if (val == ptr->data)
        {
            printf("%d\n", ptr->data);
            printf("value available on node no.:%d", ct);
        }
}