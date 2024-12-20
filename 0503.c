#include <stdio.h>
void sort(int a[], int n);
int main()
{
    int a[50][50];
    int m, n;
    scanf("%d%d", &n, &m);
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int length = n * m;
    int temp[2500] = {0};
    int index = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            temp[index++] = a[i][j];
        }
    }
    sort(temp, length);
    index = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            a[i][j] = temp[index++];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d", a[i][j]);
            if (j != m - 1)
                printf(" ");
            if (j == m - 1 && i != n - 1)
                printf("\n");
        }
    }
}
void sort(int a[], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (a[j] > a[j + 1])
            {
                int temp;
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
}