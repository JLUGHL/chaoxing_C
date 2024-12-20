#include <stdio.h>
#include <math.h>

typedef struct
{
    double real;
    double imaginary;
} complex;
int main()
{
    complex a, b;
    scanf("%lf%lf%lf%lf", &a.real, &a.imaginary, &b.real, &b.imaginary);
    if (fabs(a.imaginary + b.imaginary) < 1e-15)
        printf("%.2lf", a.real + b.real);
    else
    {
        if (a.imaginary + b.imaginary < 0)
            printf("%.2lf-%.2lfi", a.real + b.real, fabs(a.imaginary + b.imaginary));
        else
            printf("%.2lf+%.2lfi", a.real + b.real, a.imaginary + b.imaginary);
    }
    printf("    ");
    if (fabs(a.imaginary - b.imaginary) < 1e-15)
        printf("%.2lf", a.real - b.real);
    else
    {
        if (a.imaginary - b.imaginary < 0)
            printf("%.2lf-%.2lfi", a.real - b.real, fabs(a.imaginary - b.imaginary));
        else
            printf("%.2lf+%.2lfi", a.real - b.real, a.imaginary - b.imaginary);
    }
    printf("    ");
    if (fabs(a.real * b.imaginary + b.real * a.imaginary) < 1e-15)
        printf("%.2lf", a.real * b.real - a.imaginary * b.imaginary);
    else
    {
        if (a.real * b.imaginary + b.real * a.imaginary < 0)
            printf("%.2lf-%.2lfi", a.real * b.real - a.imaginary * b.imaginary, fabs(a.real * b.imaginary + b.real * a.imaginary));
        else
            printf("%.2lf+%.2lfi", a.real * b.real - a.imaginary * b.imaginary, a.real * b.imaginary + b.real * a.imaginary);
    }
    return 0;
}