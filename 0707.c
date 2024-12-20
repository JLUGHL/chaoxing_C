#include <stdio.h>
#include <stdlib.h>

void swap(int a[], int a1, int a2)
{
    if (a1 > a2)
        return;
    int temp;
    temp = a[a1];
    a[a1] = a[a2];
    a[a2] = temp;
    swap(a, a1 + 1, a2 - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    swap(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i != n - 1)
            printf(" ");
    }
    return 0;
}
