// #include <stdio.h>
// #include<math.h>

// int cut(int n, int k)
// {

//     if (n <= k)
//         return 1;
//     int cutoff = (int)round(n * 2.0 / 5);
//     return cut(cutoff,k)+cut(n-cutoff,k);
// }
// int main()
// {
//     int n, k;
//     if (scanf("%d%d", &n, &k) != 2)
//         return -1;
//     else
//         printf("%d", cut(n, k));
//     return 0;
// }
#include <stdio.h>
#include <math.h>

int countWoodPieces(int n, int k)
{
    if (n <= k)
        return 1;
    int shortPiece = (int)round(n * 2.0 / 5.0);
    int longPiece = n - shortPiece;
    return countWoodPieces(shortPiece, k) + countWoodPieces(longPiece, k);
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d\n", countWoodPieces(n, k));
    return 0;
}
