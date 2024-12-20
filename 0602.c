#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[20];
    int sex;
    int age;
} teacher;
int main()
{
    int n;
    scanf("%d", &n);
    teacher *teachers = (teacher *)malloc(n * sizeof(teacher));
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &teachers[i].name);
        scanf("%d", &teachers[i].sex);
        scanf("%d", &teachers[i].age);
    }
    int mid = n / 2;
    if (teachers[mid].sex == 0)
        printf("%s Female %d", teachers[mid].name, teachers[mid].age);
    else
        printf("%s Male %d", teachers[mid].name, teachers[mid].age);
    return 0;
}