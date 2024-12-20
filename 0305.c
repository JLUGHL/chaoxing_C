#include<stdio.h>
void prime(int n)
{
    int flag=0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            flag=1;
    }
    if(flag)
        printf("N");
    else printf("Y");
}
int main()
{
    int n;
    scanf("%d",&n);
    prime(n);
    return 0;
}