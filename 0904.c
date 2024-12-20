#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode
{
    int numerator;   // 分子
    int denominator; // 分母
    struct ListNode *next;
} ListNode;

// 创建新节点
ListNode *createNode(int numerator, int denominator)
{
    ListNode *newNode = (ListNode *)malloc(sizeof(ListNode));
    newNode->numerator = numerator;
    newNode->denominator = denominator;
    newNode->next = NULL;
    return newNode;
}

// 插入排序
void insertSorted(ListNode **head, ListNode *newNode)
{
    // 如果链表为空或新节点应该插入链表头部
    if (*head == NULL || newNode->numerator * (*head)->denominator < newNode->denominator * (*head)->numerator)
    {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    ListNode *current = *head;
    // 找到插入位置
    while (current->next != NULL && current->next->numerator * newNode->denominator < newNode->numerator * current->next->denominator)
    {
        current = current->next;
    }

    // 插入新节点
    newNode->next = current->next;
    current->next = newNode;
}

// 计算最大公约数
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = a;
        a = b;
        b = temp % b;
    }
    return a;
}

// 生成法雷序列并插入链表
void generateFareySequence(int n, ListNode **head)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            // 生成分数 j/i，跳过不可约分的分数
            if (i == 0)
                continue; // 分母不能为0
            if (gcd(j, i) == 1)
            { // 如果 j 和 i 互质
                ListNode *newNode = createNode(j, i);
                insertSorted(head, newNode);
            }
        }
    }
}

// 打印法雷序列
void printFareySequence(ListNode *head)
{
    if (head == NULL)
    {
        printf("NULL\n");
        return;
    }

    ListNode *current = head;
    while (current != NULL)
    {
        printf("%d/%d", current->numerator, current->denominator);
        if (current->next != NULL)
        {
            printf(" ");
        }
        current = current->next;
    }
    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);

    // 检查输入是否合法
    if (n <= 0)
    {
        printf("NULL\n");
        return 0;
    }

    ListNode *head = NULL;
    generateFareySequence(n, &head);
    printFareySequence(head);

    return 0;
}
// if (!sorted) {
//     // sorted 为空时，直接插入到头部
//     current->next = sorted;
//     sorted = current;
// } else if (current->value < sorted->value) {
//     // 当前节点的值小于 sorted 的头节点，插入到头部
//     current->next = sorted;
//     sorted = current;
// } else {
//     // 在 sorted 中找到插入位置
//     ListNode *temp = sorted;
//     while (temp->next && temp->next->value < current->value) {
//         temp = temp->next;
//     }
//     current->next = temp->next;
//     temp->next = current;
// }
