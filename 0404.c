#include<stdio.h>
#include<stdbool.h>
int shanchu(int a[],int n)
{
    if(n==0||n==1)
    {
        return n;
    }
    int l=1;
    for(int i=1;i<n;i++)
    {
        int flag=0;
        for(int j=0;j<i;j++)
        {
            if(a[j]==a[i])
            {
                flag=1;
                break;
            }
        }
        if(!flag)
        {
            a[l]=a[i];
            l+=1;
        }
    }
    return l;
}
int main()
{
    int a[10],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int n1;
    n1=shanchu(a,n);
    for(int i=0;i<n1;i++)
    {
        printf("%d",a[i]);
        if(i!=n1-1)
        printf(" ");
    }
    return 0;
}