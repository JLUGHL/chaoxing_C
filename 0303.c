#include<stdio.h>
#include<math.h>
double a[11];
double b[11];
double length(double a,double b,double c,double d)
{
    double length;
    length=sqrt((a-c)*(a-c)+(b-d)*(b-d));
    return length;
}
int main()
{
    int n;
    scanf("%d",&n);
    {
    for(int i=0;i<n;i++)
        scanf("%lf%lf",&a[i],&b[i]);
    if(n==1)
    {
        printf("0.00");
        return 0;
    }
    double sum=0;
    for(int i=0;i<n;i++)
    sum+=length(a[i],b[i],a[(i+1)%n],b[(i+1)%n]);
    if(n==2)printf("%.2lf",sum/2);
    else printf("%.2lf",sum);
    }
    return 0;
}