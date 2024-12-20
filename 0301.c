#include<stdio.h>
long long int fac(int n)
{
    long long int j=1;
    for(int i=1;i<=n;i++)
    j*=i;
    return j;
}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    if(m>0&&n>0)
    {
        if(m<n)
            printf("0");
        if(m==n)
            printf("1");
        if(m>n)
            printf("%d",fac(m)/(fac(m-n)*fac(n)));
    }else printf("-1");
    return 0;
}