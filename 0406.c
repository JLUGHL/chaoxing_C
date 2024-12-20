#include<stdio.h>
void move(int a[],int n,int k)
{
    k=k%n;
    if(k==0)
        return;
    int i,temp=a[n-1];
    for(i=n-1;i>0;i--)
        a[i]=a[i-1];
    a[0]=temp;
    for(i=1;i<k;i++)
    {
        temp=a[n-1];
        for(int j=n-1;j>0;j--)
            a[j]=a[j-1];
        a[0]=temp;
    }
}
void print_arr(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
        if(i!=n-1)
        printf(" ");
    }
}
int main()
{
    int n,i,a[100],j;
    scanf("%d%d",&n,&j);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    move(a,n,j);
    print_arr(a,n);
    return 0;
}