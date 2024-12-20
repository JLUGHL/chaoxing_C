#include <stdio.h>

char data1[20][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
                      "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
                      "eighteen", "nineteen"};
char data2[8][10] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

void print_number_in_words(int n)
{
    int a[3]; // 用来存储百位、十位和个位的数字
    int n1, i, count = 0;

    // 如果是1000，单独处理
    if (n == 1000)
    {
        printf("one thousand");
        return;
    }

    n1 = n;
    // 将数字的个位、十位、百位存储到数组中
    for (i = 0; n1 != 0; i++)
    {
        a[i] = n1 % 10;
        n1 = n1 / 10;
        count++;
    }

    // 如果数字超出范围，输出错误
    if (n < 0 || n > 999)
    {
        printf("ERR");
        return;
    }

    switch (count)
    {
    case 1: // 一位数
        printf("%s", data1[n]);
        break;
    case 2: // 两位数
        if (a[1] == 1)
        {
            // 如果十位是1，处理10到19的数字
            printf("%s", data1[n]);
        }
        else
        {
            // 否则处理十位和个位
            printf("%s", data2[a[1] - 2]);
            if (a[0] != 0)
            {
                printf("-%s", data1[a[0]]);
            }
        }
        break;
    case 3: // 三位数
        // 处理百位
        printf("%s hundred", data1[a[2]]);
        if (a[1] != 0 || a[0] != 0)
        {
            printf(" and ");
        }
        // 处理十位和个位
        if (a[1] == 1)
        {
            // 如果十位是1，处理10到19的数字
            printf("%s", data1[a[1] * 10 + a[0]]);
        }
        else
        {
            if (a[1] != 0)
            {
                printf("%s", data2[a[1] - 2]);
            }
            if (a[0] != 0)
            {
                if (a[1] != 0)
                    printf("-");
                printf("%s", data1[a[0]]);
            }
        }
        break;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    print_number_in_words(n);
    return 0;
}
