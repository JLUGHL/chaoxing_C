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
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int temp;
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for(int i=0;i<n;i++)
    {   
        for(int j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
            if(j!=n-1)
            printf(" ");
            if(j==n-1)
            printf("\n");
        }
    }
    return 0;
}