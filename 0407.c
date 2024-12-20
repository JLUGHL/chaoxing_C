// #include<stdio.h>
// #include<stdlib.h>
// int a[10][10];
// int main()
// {
//     int n,flag;
//     int *p;
//     flag=1;
//     scanf("%d",&n);
//     for(p=a;p<&a[0][0]+(n-1)*n+n;p++)
//     {
//         scanf("%d",p);
//     }
//     for(p=a;p<&a[0][0]+n*(n-1)+n;p++)
//     {
//         for(int *q=p+1;q<&a[0][0]+n*(n-1)+n;q++)
//         {
//             if(*p==*q)
//             flag=0;
//             break;
//         }
//         if(!flag)
//         printf("NO");
//         break;
//     }
//     if(flag)
//     printf("YES");
//     return 0;
// }

#include<stdio.h>
int main()
{
    int n;
    int a[10][10];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    int flag=1;
    int *p=&a[0][0];
    int *q=&a[0][0]+1;
    for(p=&a[0][0];p<&a[0][0]+n*n-1;p++)
    {
        for(q=p+1;q<&a[0][0]+n*n;q++)
        {
            if(*q==*p)
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
        {
            printf("YES");
            break;
        }
    }
    if(flag==1)
    printf("NO");
    return 0;
}

// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     int a[10][10];
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             for (int k = i; k < n; k++) {
//                 for (int l = (k == i) ? j + 1 : 0; l < n; l++) {
//                     if (a[i][j] == a[k][l]) {
//                         printf("YES\n");
//                         return 0;
//                     }
//                 }
//             }
//         }
//     }
//     printf("NO\n");

//     return 0;
// }
