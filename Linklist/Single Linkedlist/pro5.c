// All Insert Function of LinkedList
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
void insertfirst(Node *);
void insertlast(Node *);
void insertn(Node *);

int main()
{
    int ch;
    // start = (Node *)malloc(sizeof(Node));
    do
    {
        printf("press 1for create:\n");
        printf("press 2for Display:\n");
        printf("press 3 for insert at first\n");
        printf("press 4 for insert at last:\n");
        printf("press 5 for insert at n position:\n");
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
            insertfirst(start);
            break;
        case 4:
            insertlast(start);
            break;
            case 5: insertn(start);
            break;
        default:
            ch = 0;
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
    int ch;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
void insertfirst(Node *ptr)
{
    Node *new1;
    new1 = (Node *)malloc(sizeof(Node));
    printf("enter data you want to insert:");
    scanf("%d", &new1->data);
    if (start == NULL)
    {
        new1->next = NULL;
        start = new1;
    }
    else
    {
        new1->next = start;
        start = new1;
    }
}
void insertlast(Node *ptr)
{
    Node *new1;
    new1 = (Node *)malloc(sizeof(Node));
    printf("enter data you want to insert at last:");
    scanf("%d", &new1->data);
    if (start == NULL)
    {
        new1->next = NULL;
        start = new1;
    }
    else
    {
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new1;
        new1->next = NULL;
    }
}
void insertn(Node *ptr)
{
    Node *new1;
    int i,Node_no,ct;
    new1=(Node *)malloc(sizeof(Node));
    printf("\nEnter node no.:");
    scanf("%d",&Node_no);
    printf("\nEnter element you want to insert:");
    scanf("%d",&new1->data);
    if(Node_no==num)
    {
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=new1;
        new1->next=NULL;
    }else{
        ct=1;
        while(ct<Node_no && ptr!=NULL)
        {
            ct++;
            ptr=ptr->next;
        }
        if(ptr==NULL)
        {
            printf("Try Again");
        }else{
            new1->next=ptr->next;
            ptr->next=new1;
        }
    }
}