#include <stdio.h>

int Ackerman(int m, int n);
int main()
{
    int n, m;
    if (scanf("%d%d", &m, &n) != 2)
        return 1;
    printf("%d", Ackerman(m, n));
    return 0;
}
int Ackerman(int m, int n)
{
    if (m == 0)
        return n + 1;
    else if (n == 0)
        return Ackerman(m - 1, 1);
    else if (m > 0 && n > 0)
        return Ackerman(m - 1, Ackerman(m, n - 1));
    else
        return 0;
}