#include <stdio.h>
#include <malloc.h>

struct link
{
    int info;
    struct link *next;
} *start;

void display(struct link *);
struct link *push(struct link *);
struct link *pop(struct link *);
void display(struct link *rec)
{
    while (rec != NULL)
    {
        printf("%d\n", rec->info);
        rec = rec->next;
    }
}

struct link *push(struct link *ptr)
{
    struct link *new_rec;
    printf("\nInput the value for next location of the Stack:\n");
    new_rec = (struct link *)malloc(sizeof(struct link));
    scanf("%d",&new_rec->info);

    new_rec->next = ptr;
    ptr = new_rec;
    return ptr;
}

struct link *pop(struct link *rec)
{
    struct link *temp;
    if (rec == NULL)
    {
        printf("\n stack is empty");
    }
    else
    {
        temp = rec->next;
        free(rec);
        rec = temp;
        printf("\n After PoP operation the stack is as follows :\n");
        if (rec != NULL)
        {
            display(rec);
        }
        return rec;
    }
}
int main()
{
    int choice;
    start = NULL;
    do
    {
        do
        {
            printf("\n1<-push");
            printf("\n2<-pop");
            printf("\n3<-Quit");
            printf("\nInput your Choice:");
            scanf("%d", &choice);
            if (choice < 1 || choice > 3)
            {
                printf("\nIncorrect choice->Try Again");
            }
        } while (choice < 1 || choice > 3);
        switch (choice)
        {
        case 1:
            start = push(start);
            printf("\n Stack is as follows:\n");
            display(start);
            break;
        case 2:
            start = pop(start);
        default:
            choice = 3;
            printf("\nEnd of Session");
            break;
        }
    } while (choice != 3);
}