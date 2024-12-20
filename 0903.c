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
    node head = NULL, tail = NULL, p, p0;
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
    node fast = head, slow = head;
    while (fast != NULL && fast->next != NULL && fast->next->next != NULL)
    {
        fast = fast->next;
        fast = fast->next;
        slow = slow->next;
    }
    for (p = slow; p; p = p->next)
    {
        printf("%d", p->number);
        if (p->next)
            printf(" ");
    }
    return 0;
}