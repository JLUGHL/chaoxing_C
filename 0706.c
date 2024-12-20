#include <stdio.h>
#include <stdlib.h>

int find_max(int arr[], int left, int right)
{
    if (right == left)
        return arr[right];
    int mid = (right + left) / 2;
    int left_max = find_max(arr, left, mid);
    int right_max = find_max(arr, mid + 1, right);
    return (left_max > right_max) ? left_max : right_max;
}
int main()
{
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int max = find_max(arr, 0, n - 1);
    printf("%d", max);
    return 0;
}