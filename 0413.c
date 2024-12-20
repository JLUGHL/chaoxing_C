#include <stdio.h>

int p[31][31]; // 用于存储矩阵
int z = 1;     // 当前填充的数字

int main()
{
    int n, x, y;
    scanf("%d", &n);

    // 初始化矩阵为0
    for (x = 1; x <= n; x++)
    {
        for (y = 1; y <= n; y++)
        {
            p[x][y] = 0;
        }
    }

    // 定义边界
    int top = 1, bottom = n, left = 1, right = n;

    // 迭代填充矩阵
    while (top <= bottom && left <= right)
    {
        // 从左到右填充一行
        for (y = left; y <= right; y++)
        {
            p[top][y] = z++;
        }
        top++; // 填充完一行，上边界下移

        // 从上到下填充一列
        for (x = top; x <= bottom; x++)
        {
            p[x][right] = z++;
        }
        right--; // 填充完一列，右边界左移

        if (top <= bottom)
        {
            // 从右到左填充一行
            for (y = right; y >= left; y--)
            {
                p[bottom][y] = z++;
            }
            bottom--; // 填充完一行，下边界上移
        }

        if (left <= right)
        {
            // 从下到上填充一列
            for (x = bottom; x >= top; x--)
            {
                p[x][left] = z++;
            }
            left++; // 填充完一列，左边界右移
        }
    }

    // 输出矩阵
    for (x = 1; x <= n; x++)
    {
        for (y = 1; y <= n; y++)
        {
            printf("%4d", p[x][y]); // 输出格式为4个字符宽
        }
        printf("\n");
    }

    return 0;
}
