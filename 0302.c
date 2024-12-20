#include<stdio.h>
void nixu(long long int n)
{
    while(n%10==0)//如果末尾有0.要先把0去掉
    {
        n=n/10;
    }
    while(n/10)
    {
        printf("%d",n%10);
        n/=10;
    }
    printf("%d",n);
}
int main()
{
    long long int n;
    scanf("%lld",&n);
    if(n<0)
    printf("NULL\n");
    else if(n/10==0)
        printf("%d",n);
    else
    {
        nixu(n);
    }
    return 0;
}