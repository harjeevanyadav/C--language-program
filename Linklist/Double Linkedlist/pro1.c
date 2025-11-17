#include <stdio.h>
#include <malloc.h>

struct Dlink_list
{
    struct Dlink_list *prev;
    int info;
    struct Dlink_list *next;
};

typedef struct Dlink_list Dnode;

// Global Declaration

int num;
Dnode *lp = NULL, *rp = NULL;

void create(Dnode *);
void display(Dnode *);
void insertf(Dnode *);
void insertl(Dnode *);
void insertlast(Dnode *);
void insert_before(int ,Dnode *);
void insert_after(int ,Dnode *);

int main()
{
    int ch;
    // lp = (Dnode *)malloc(sizeof(Dnode));
    // create(lp);
    // display(lp);
    do
    {
        printf("press 1 for create:\n");
        printf("press 2 for display:\n");
        printf("press 3 for insert at first:\n");
        printf("press 4 for insert at last:\n");
        printf("press 5 for insertint at last using rp:");
        printf("press 6 for insert before a given node:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create(lp);
            break;
        case 2:
            display(lp);
            break;
        case 3:
            insertf(lp);
            break;
        case 4:
            insertl(lp);
            break;
        case 5:
            insertlast(rp);
            break;
            case 6:
            {
                int x;
                printf("enter the value before which you want to insert:\n");
                scanf("%d",&x);
                insert_before(x,lp);
                break;
            }
        default:
            ch = 0;
            break;
        }
    } while (ch != 0);
    return 0;
}

void create(Dnode *ptr)
{
    int ch;
    num = 0;
    if (lp == NULL)
    {
        lp = (Dnode *)malloc(sizeof(Dnode));
        ptr = lp;
    }
    lp->prev = NULL;
    do
    {
        printf("Input the values of node:%d\n", (num + 1));
        scanf("%d", &ptr->info);

        printf("for continue press 1:\n");
        scanf("%d", &ch);
        if (ch == 1)
        {
            ptr->next = (Dnode *)malloc(sizeof(Dnode));
            ptr->next->prev = ptr;
            ptr = ptr->next;
        }
        num++;
    } while (ch == 1);

    ptr->next = NULL;
    rp = ptr; // asign address of right most node to rp
    printf("Total nodes=%d", num);
}

void display(Dnode *ptr)
{
    while (ptr != NULL) // traverse List
    {
        printf("%d\n", ptr->info);
        ptr = ptr->next;
    }
    ptr = rp;
    printf("\n");
    while (ptr != NULL)
    {
        printf("%d\n", ptr->info);
        ptr = ptr->prev;
    }
}
void insertf(Dnode *ptr)
{
    Dnode *new1;
    new1 = (Dnode *)malloc(sizeof(Dnode));
    printf("Input the value :\n");
    scanf("%d", &new1->info);
    if (lp == NULL)
    {
        new1->prev = NULL;
        new1->next = NULL;
    }
    else
    {
        new1->prev = NULL;
        new1->next = ptr;
        ptr->prev = new1;
        lp = new1;
    }
}
void insertl(Dnode *ptr)
{
    Dnode *new1, *pre;
    new1 = (Dnode *)malloc(sizeof(Dnode));
    printf("Input the value :\n");
    scanf("%d", &new1->info);
    if (ptr == NULL)
    {
        new1->prev = NULL;
        new1->next = NULL;
        lp = new1;
    }
    else
    {
        while (ptr != NULL)
        {
            pre = ptr;
            ptr = ptr->next;
        }
        pre->next = new1;
        new1->prev = pre;
        new1->next = NULL;
        rp = new1;
    }
}
void insertlast(Dnode *ptr)
{
    Dnode *new1;
    new1 = (Dnode *)malloc(sizeof(Dnode));
    printf("Input the value :\n");
    scanf("%d", &new1->info);
    if (ptr == NULL)
    {
        new1->next = NULL;
        new1->prev = NULL;
        rp = new1;
    }
    else
    {
        rp->next = new1;
        new1->prev = rp;
        new1->next = NULL;
        rp = new1;
    }
}
void insert_before(int x,Dnode *ptr)
{
    Dnode *new1;
    new1 = (Dnode *)malloc(sizeof(Dnode));
    while(ptr->info!=x && ptr!=NULL)
    {
        ptr=ptr->next;
    }
    if(ptr==NULL)
    {
        printf("the element does not exist:\n");
        exit(0);
    }
    printf("enter the value to be inserted:\n");
    scanf("%d",&new1->info);

    if(ptr==lp)
    {
        new1->prev=NULL;
        new1->next=ptr;
        ptr->prev=new1;
        lp=new1;
    }
    else
    {
        new1->next=ptr;
        new1->prev=ptr->prev;
        ptr->prev->next=new1;
        ptr->prev=new1;
    }
    num++;
}
void insert_after(int x,Dnode *ptr)
{
    Dnode *new1;
    new1 = (Dnode *)malloc(sizeof(Dnode));
    if(ptr==NULL)
    {
       new1->next=NULL;
       new1->prev=NULL;
         lp=new1;
    }
    while(ptr->info!=x && ptr!=NULL)
    {
        ptr=ptr->next;
    }
    if(ptr == rp)
    {
        ptr->next=new1;
        new1->prev=ptr;
        new1->next=NULL;
        rp=new1;
    }
    else{
        
    }

}