#include<stdio.h>
void jiaohuan(int a[],int n)
{
    int j,i;
    for(i=0;i<n-1;i++)
    {
        if(a[i]==0)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[j]!=0)
                {
                    int temp;
                    temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                    break;
                }
            }
        }
    }
}
int main()
{
    int a[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    jiaohuan(a,n);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}