#include <stdio.h>

int combination_number(int n, int m)
{
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    if (n == 1)
        return m;
    if (m < 2 * n)
        return combination_number(m - n, m);
    else
        return combination_number(n - 1, m - 1) + combination_number(n, m - 1);
}
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    printf("%d", combination_number(m, n));
    return 0;
}