#include<stdio.h>
#include<string.h>
int main()
{
    char str[255];
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    for(int i=len-1;i>-1;i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}