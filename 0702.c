// #include <stdio.h>

// double hermite_polynomial(int n, double x)
// {
//     if(n<0)
//     return 0;
//     if (n == 0)
//         return 1;
//     if (n == 1)
//         return 2 * x;
//     if (n > 1)
//         return 2 * x * hermite_polynomial(n - 1, x) - 2 * (n - 1) * hermite_polynomial(n - 2, x);
// }
// int main()
// {
//     int n;
//     double x;
//     scanf("%d%lf", &n, &x);
//     printf("%.2lf", hermite_polynomial(n, x));
//     return 0;
// }
#include <stdio.h>

double hermite_polynomial(int n, double x)
{
    // 基本情况，n 为负数时返回 0
    if (n < 0)
        return 0;

    // 当 n == 0 时，H_0(x) = 1
    if (n == 0)
        return 1;

    // 当 n == 1 时，H_1(x) = 2x
    if (n == 1)
        return 2 * x;

    // 递归计算 Hermite 多项式
    return 2 * x * hermite_polynomial(n - 1, x) - 2 * (n - 1) * hermite_polynomial(n - 2, x);
}

int main()
{
    int n;
    double x;

    // 检查 scanf 是否成功读取了两个值
    if (scanf("%d%lf", &n, &x) != 2)
    {
        printf("Input error\n");
        return 1; // 输入无效时退出程序
    }

    // 打印计算结果，保留两位小数
    printf("%.2lf\n", hermite_polynomial(n, x));

    return 0;
}
