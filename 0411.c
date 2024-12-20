#include <stdio.h>

int main()
{
    int n, s, m;

    // 输入 n, s, m
    scanf("%d %d %d", &n, &s, &m);

    // 创建一个数组，记录每个人是否活着。1表示活着，0表示已经处决。
    int people[1000];
    for (int i = 0; i < n; i++)
    {
        people[i] = 1; // 初始化为1，表示每个人都活着
    }

    int remaining = n; // 剩余活着的人数
    int index = s - 1; // 从第s个人开始计数（s是1-based，转换为0-based）

    // 存储被处决的人的编号
    int first = 1; // 用于判断是否是第一次输出（避免前面多空格）

    while (remaining > 1) // 剩下一个人的时候停止
    {
        // 找到第m个要处决的人
        int count = m;
        while (count > 0)
        {
            if (people[index % n] == 1)
            { // 只有活着的人才计算
                count--;
            }
            if (count > 0)
            {
                index++; // 如果还没数到第m个，继续向后找
            }
        }

        // 处决这个人
        people[index % n] = 0; // 将此人标记为处决

        // 输出处决的人的编号
        if (first)
        {
            printf("%d", index % n + 1); // 输出编号，转换为1-based
            first = 0;
        }
        else
        {
            printf(" %d", index % n + 1); // 输出编号，转换为1-based
        }

        remaining--; // 剩余的人数减少
    }

    // 输出最后活下来的人的编号
    for (int i = 0; i < n; i++)
    {
        if (people[i] == 1)
        {                           // 找到活着的人
            printf(" %d\n", i + 1); // 输出编号，转换为1-based
            break;
        }
    }

    return 0;
}
