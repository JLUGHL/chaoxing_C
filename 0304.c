#include<stdio.h>
void zishou(int n)
{
    long long int m=10,temp;
    temp=n;
    while(temp/10)
    {
        temp/=10;
        m*=10;
    }
    long long int p;
    p=(n*n)%m;
    if(p==n)
    printf("%d ",n);
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    zishou(i);
    return 0;
}