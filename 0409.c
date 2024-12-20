#include<stdio.h>
int a[10][10];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    int flag;
    flag=1;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i][j]!=a[j][i])
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}