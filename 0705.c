#include <stdio.h>
#include <stdlib.h>

int search(int a[], int length, int index, int target)
{
    if (index >= length)
        return -1;
    else if (a[index] == target)
        return index;
    else
        return search(a, length, index + 1, target);
}
int main()
{
    int n;
    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int target;
    scanf("%d", &target);
    if (search(a, n, 0, target) == -1)
        printf("NULL");
    else
        printf("%d", search(a, n, 0, target));
    return 0;
}