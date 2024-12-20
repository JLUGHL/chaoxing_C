#include <stdio.h>
#include <string.h>

int valid1(char c);
int valid2(char c);
int main()
{
    int N;
    scanf("%d", &N);
    getchar();
    char str[100][256];
    int i, j, count1 = 0, count2 = 0;
    for (i = 0; i < N; i++)
        fgets(str[i], sizeof(str[i]), stdin);
    for (i = 0; i < N; i++)
    {
        if (valid1(str[i][0]))
        {
            int flag = 0;
            for (j = 1; j < strlen(str[i]) - 1; j++)
            {
                if (valid2(str[i][j]) == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                count1 += 1;
            else
                count2 += 1;
        }
        else
            count2 += 1;
    }
    printf("Valid:%d\n", count1);
    printf("Invalid:%d", count2);
    return 0;
}
int valid1(char c)
{
    if (c == '_' || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 1;
    return 0;
}
int valid2(char c)
{
    if (c == '_' || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        return 1;
    return 0;
}
