#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int number;
    struct Node *next;
} list;
typedef struct Node *node;
int main()
{
    int n;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("NULL");
        return 0;
    }
    node head = NULL, tail = NULL, p, p0, p1;
    while (n != 0)
    {
        p = (node)malloc(sizeof(list));
        p->number = n;
        p->next = NULL;
        if (head == tail && tail == NULL)
            head = tail = p;
        else
        {
            tail->next = p;
            tail = p;
        }
        scanf("%d", &n);
    }
    for (p = head; p; p = p->next)
    {
        p1 = p;
        for (p0 = p->next; p0;)
        {
            if (p0->number == p->number)
            {
                p1->next = p0->next;
                free(p0);
                p0 = p1->next;
            }
            else
            {
                p1 = p0;
                p0 = p0->next;
            }
        }
    }
    for (p = head; p; p = p->next)
    {
        printf("%d", p->number);
        if (p->next)
            printf(" ");
    }
    return 0;
}