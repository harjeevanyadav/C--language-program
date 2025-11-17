#include <stdio.h>
#include <malloc.h>

struct link_list
{
    int data;
    struct link_list *next;
};

typedef struct link_list Node;
Node *start = NULL;
int num;

void create(Node *);
void display(Node *); // function prototype
void delfirst(Node *);
void dellast(Node *);
void deln(Node *);
void delval(Node *);
void sort(Node *);
void reverse(Node *);
// void insertn(Node *);

int main()
{
    int ch;
    // start = (Node *)malloc(sizeof(Node));
    do
    {
        printf("press 1for create:\n");
        printf("press 2for Display:\n");
        printf("press 3 for delete first node:\n");
        printf("Press 4 for deleting Last node:\n");
        printf("press 5 for deleting from any position:\n");
        printf("press 6 for deleting by value:\n");
        printf("press 7 do you want to sort:\n");
        printf("press 8 for reverse LL:\n");
        printf("enter your choice:\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create(start);
            break;
        case 2:
            printf("\n created list is as follows:\n");
            display(start);
            break;
        case 3:
            delfirst(start);
            break;
        case 4:
            dellast(start);
            break;
        case 5:
            deln(start);
            break;
        case 6:
            delval(start);
            break;
        case 7:
            sort(start);
            break;
            case 8:
            reverse(start);
            break;
        default:
        ch=0;
            }
    } while (ch != 0);
    return 0;
}
void create(Node *ptr)
{
    int ch, num = 0;
    if (start == NULL)
    {
        start = (Node *)malloc(sizeof(Node));
        ptr = start;
    }
    do
    {
        printf("\nInput the values of the node:%d:", (num + 1));
        printf("enter your data:");
        scanf("%d", &ptr->data);

        printf("\nfor continue press 1:");
        scanf("%d", &ch);
        if (ch == 1)
        {
            ptr->next = (Node *)malloc(sizeof(Node));
            ptr = ptr->next;
        }
        num++;
    } while (ch == 1);
    ptr->next = NULL;
    printf("\n Total nodes =%d", num);
}
void display(Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
void delfirst(Node *ptr)
{
    if (start == NULL)
    {
        printf("List is Emplty");
    }
    else
    {
        start = ptr->next;
        free(ptr);
    }
}
void dellast(Node *ptr)
{
    Node *prev;
    if (start->next == NULL)
    {
        free(ptr);
        start = NULL;
    }
    else if (start == NULL)
    {
        printf("List is Empty");
    }
    else
    {
        while (ptr->next != NULL)
        {
            prev = ptr;
            ptr = ptr->next;
        }
        free(ptr);
        prev->next = NULL;
    }
}
void deln(Node *ptr)
{
    int node_no, ct = 1;
    Node *prev;
    printf("enter node no.do you want to delete:\n");
    scanf("%d", &node_no);
    if (start == NULL)
    {
        printf("List is empty");
    }
    else
    {
        while (ct < node_no && ptr != NULL)
        {
            prev = ptr;
            ptr = ptr->next;
            ct++;
        }
        if (ct == 1)
        {
            start = ptr->next;
        }
        else if (ptr->next == NULL)
        {
            prev->next = NULL;
        }
        else if (ptr == NULL)
        {
            printf("your choice is not valid");
        }
        else
        {
            prev->next = ptr->next;
        }
        free(ptr);
    }
}
void delval(Node *ptr)
{
    int node_no, ct = 1;
    Node *prev;
    printf("enter node no.do you want to delete:\n");
    scanf("%d", &node_no);
    if (start == NULL)
    {
        printf("List is empty");
    }
    else
    {
        while (ptr->data != node_no && ptr != NULL)
        {
            prev = ptr;
            ptr = ptr->next;
            ct++;
        }
        if (ct == 1)
        {
            start = ptr->next;
        }
        else if (ptr->next == NULL)
        {
            prev->next = NULL;
        }
        else if (ptr == NULL)
        {
            printf("your choice is not valid");
        }
        else
        {
            prev->next = ptr->next;
        }
        free(ptr);
    }
}
void sort(Node *ptr)
{
    Node *temp;
    int x;
    for (; ptr->next != NULL; ptr = ptr->next)
    {
        for (temp = ptr->next; temp != NULL; temp = temp->next)
        {
            if (ptr->data > temp->data)
            {
                x = ptr->data;
                ptr->data = temp->data;
                temp->data = x;
            }
        }
    }
}
void reverse(Node *ptr)
{
    Node *prev=NULL,*curr;
    curr=ptr->next;
    while (curr!=NULL)
    {
        ptr->next=prev;
        prev=ptr;
        ptr=curr;
        curr=curr->next;
    }
    ptr->next=prev;
    start=ptr;
}