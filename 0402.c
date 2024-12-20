#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[100];
    int i,j;
    int n;
    scanf("%d",&n);
    while(1)
    {
        i=0;
        while(1)
        {
            scanf("%d",&a[i]);
            if(a[i]==0)
                break;
            if(a[0]==-1)
                exit(0);
            i++;
        }
        int temp=i,count=0;
        for(i=0;i<temp;i++)
                for(j=i+1;j<temp;j++)
                    if(a[i]*n==a[j]||a[j]*n==a[i])
                        count+=1;
            printf("%d\n",count);
    }
    return 0;
}
