// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Node
// {
//     int number;
//     struct Node *next;
// } list;
// typedef struct Node *node;

// node creatnode(int number)
// {
//     node new = (node)malloc(sizeof(list));
//     new->number = number;
//     new->next = NULL;
//     return new;
// }

// node insertion_sort(node head)
// {
//     if (!head || head->next == NULL)
//         return head;
//     node current = head;
//     node sort = NULL;
//     while (current)
//     {
//         if (!sort)
//         {
//             current->next = sort;
//             sort = current;
//         }
//         else if (current->number < sort->number)
//         {
//             current->next = sort;
//             sort = current;
//         }
//         else
//         {
//             node tmp = sort;
//             while (tmp->next != NULL && current->number > tmp->number)
//             {
//                 tmp = tmp->next;
//             }
//             current->next = tmp->next;
//             tmp->next = current;
//         }
//         current = current->next;
//     }
// }
// int main()
// {
//     int num;
//     node head = NULL, tail = NULL;
//     while (scanf("%d", &num) == 1 && num != 0)
//     {
//         node new = creatnode(num);
//         if (!head)
//             head = new;
//         else
//             tail->next = new;
//         tail = new;
//     }
//     head = insertion_sort(head);
//     node p = head;
//     while (p)
//     {
//         printf("%d ", p->number);
//         p = p->next;
//     }
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int number;
    struct Node *next;
} list;
typedef struct Node *node;

node creatnode(int number)
{
    node new = (node)malloc(sizeof(list));
    new->number = number;
    new->next = NULL;
    return new;
}

node insertion_sort(node head)
{
    if (!head || head->next == NULL)
        return head;

    node sorted = NULL;

    while (head)
    {
        node current = head;
        head = head->next;

        if (!sorted || current->number < sorted->number)
        {
            current->next = sorted;
            sorted = current;
        }
        else
        {
            node tmp = sorted;
            while (tmp->next && tmp->next->number < current->number)
            {
                tmp = tmp->next;
            }
            current->next = tmp->next;
            tmp->next = current;
        }
    }
    return sorted;
}

int main()
{
    int num;
    node head = NULL, tail = NULL;

    while (scanf("%d", &num) == 1 && num != 0)
    {
        node new = creatnode(num);
        if (!head)
            head = new;
        else
            tail->next = new;
        tail = new;
    }

    head = insertion_sort(head);

    node p = head;
    while (p)
    {
        printf("%d ", p->number);
        p = p->next;
    }

    printf("\n");
    return 0;
}
