#include <stdio.h>
#include <string.h>

void count(char *str, int *upper, int *lower, int *space, int *num, int *other);
int main()
{
    char str[256];
    fgets(str, sizeof(str), stdin);
    int t1, t2, t3, t4, t5;
    count(str, &t1, &t2, &t3, &t4, &t5);
    printf("%d %d %d %d %d", t1, t2, t3, t4, t5);
    return 0;
}
void count(char *str, int *upper, int *lower, int *space, int *num, int *other)
{
    int t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            t1++;
        else if (str[i] >= 'a' && str[i] <= 'z')
            t2++;
        else if (str[i] == ' ')
            t3++;
        else if (str[i] >= '0' && str[i] <= '9')
            t4++;
        else
            t5++;
    }
    *upper = t1;
    *lower = t2;
    *space = t3;
    *num = t4;
    *other = t5;
}