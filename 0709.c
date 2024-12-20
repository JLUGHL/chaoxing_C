#include <stdio.h>

void convertToBase(unsigned int n, int b)
{
    if (n == 0)
        return;
    convertToBase(n / b, b); // 递归处理高位
    int remainder = n % b;
    if (remainder < 10)
        printf("%d", remainder); // 数字 0-9
    else
        printf("%c", 'A' + remainder - 10); // 字母 A-Z
}

int main()
{
    unsigned int n;
    int b;
    scanf("%u %d", &n, &b);
    if (b < 2 || b > 36)
    {
        return -1; // 进制不合法
    }
    if (n == 0)
    { // 特殊情况处理
        printf("0\n");
        return 0;
    }
    convertToBase(n, b); // 调用递归函数
    printf("\n");
    return 0;
}
