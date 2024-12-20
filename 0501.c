#include <stdio.h>

int strlen(char *str);
int main()
{
    char str[256];
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    printf("%d", len);
    return 0;
}
int strlen(char *str)
{
    int i = 0;
    while (1)
    {
        if (str[i] != '\0')
            i++;
        else
            break;
    }
    return i;
}