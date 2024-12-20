#include <stdio.h>

int gcd(int n, int m);
int main()
{
    int n, m;
    if (scanf("%d%d", &n, &m) != 2)
        return -1;
    printf("%d", gcd(n, m));
    return 0;
}
int gcd(int n, int m)
{
    if (m <= 0 || n <= 0)
        return -1;
    if (m > n)
        return gcd(n, m - n);
    else if (m < n)
        return gcd(n - m, m);
    else if (m == n)
        return m;
    else if (m == 1 || n == 1)
        return m * n;
    else
        return -1;
}