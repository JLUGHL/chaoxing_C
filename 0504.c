#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str_delete(char *s, int v, int w);

int main()
{
    int v, w;
    scanf("%d%d", &v, &w);          // 输入删除的起始位置 v 和删除的长度 w
    getchar();                      // 读取换行符
    char str[257];                  // 字符串的长度最大为 256，所以数组大小是 257，包括 '\0'
    fgets(str, sizeof(str), stdin); // 输入字符串，允许包含空格

    // 删除操作
    str_delete(str, v, w);

    // 输出处理后的字符串
    printf("%s", str);
    return 0;
}

char *str_delete(char *s, int v, int w)
{
    int len = strlen(s);

    // 将 v 从 1-based 转为 0-based
    v--;

    if (v >= len)
    {
        return s; // 如果起始位置超出了字符串长度，直接返回原字符串
    }

    // 删除操作：将从 v + w 开始的字符覆盖到 v 位置
    for (int i = v; i + w < len; i++)
    {
        s[i] = s[i + w];
    }

    // 在新的末尾添加字符串结束符 '\0'
    s[len - w] = '\0';

    return s;
}
