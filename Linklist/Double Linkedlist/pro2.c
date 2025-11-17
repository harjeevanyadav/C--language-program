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
void deletef(Dnode *);
void deletel(Dnode *);
void deleten(int, Dnode *);
// void insertlast(Dnode *);

int main()
{
    int ch, n;
    // lp = (Dnode *)malloc(sizeof(Dnode));
    // create(lp);
    // display(lp);
    do
    {
        printf("press 1 for create:\n");
        printf("press 2 for display:\n");
        printf("press 3 for delete at first:\n");
        printf("press 4 for delete at last:\n");
        printf("press 5 for delete at n position:\n");
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
            deletef(lp);
            break;
        case 4:
            deletel(rp);
            break;
        case 5:
        {
            printf("enter the position to delete:\n");
            scanf("%d", &n);
            deleten(n, lp);
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
void deletef(Dnode *ptr)
{
    if (ptr == NULL)
    {
        printf("list is emoty");
        exit(0);
    }
    if (lp == rp)
    {
        lp = NULL;
        rp = NULL;
        free(ptr);
    }
    else
    {
        lp = lp->next;
        lp->prev = NULL;
        free(ptr);
    }
}
void deletel(Dnode *ptr)
{
    if (ptr == NULL)
    {
        printf("list is empty");
        exit(0);
    }
    if (rp == lp)
    {
        lp = NULL;
        rp = NULL;
        free(ptr);
    }
    else
    {
        rp = rp->prev;
        rp->next = NULL;
        free(ptr);
    }
}
void deleten(int node_no,Dnode *ptr)
{
    int search_counter=1;
    Dnode *prev=NULL;
    if(lp==NULL)
    {
        printf("list is empty:\n");
        exit(0);
    }
    while(ptr!=NULL && search_counter<node_no)
    {
        prev=ptr;
        ptr=ptr->next;
        search_counter++;
    }
    if(ptr==NULL)
    {
        printf("node does not exist:\n");
        exit(0);
    }
    if(ptr->prev=NULL)
    {
        lp=lp->next;
        lp->prev=NULL;
        free(ptr);
    }else if(ptr->next==NULL)
    {
        rp=rp->prev;
        rp->next=NULL;
        free(ptr);
    }else{
        prev->next=ptr->next;
        ptr->next->prev=prev;
        free(ptr);
    }
}