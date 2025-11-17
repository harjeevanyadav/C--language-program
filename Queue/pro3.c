#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data, pn;
    struct node *next;
};
struct node *f = NULL;
void insert(int data, int pn)
{
    struct node *temp, *p;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->pn = pn;
    temp->next = NULL;
    if (f == NULL || pn < f->pn)
    {
        temp->next = f;
        f = temp;
    }
    else
    {
        p = f;
        while (p->next != NULL && p->next->pn <= pn)
        {
            p = p->next;
        }
        temp->next = p->next;
        p->next = temp;
    }
}

void display()
{
    struct node *temp=f;
    if(f==NULL)
    {
        printf("\nQueue is Empty\n");
    }
    while(temp!=NULL)
    {
        printf("\nPrioprity: %d,Data: %d\n",temp->pn,temp->data);
        temp=temp->next;
    }
}

int main()
{
    int a,data,pn;
    while(1){
        printf("\n1.Insert:\n");
        printf("2.Display:\n");
        printf("3.Exit:\n");
        printf("enter Your Choice:\n");
        scanf("%d",&a);
        switch(a)
        {
            case 1:
            printf("Enter Data:");
            scanf("%d",&data);
            printf("\nEnter the Priority:");
            scanf("%d",&pn);
            insert(data,pn);
            break;
            case 2:
            display();
            break;
            case 3:
            exit(0);
            default:
            printf("Invalid Choice");
        }
    }
}