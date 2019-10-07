#include <stdio.h>

int main()
{
    double tc, tf;
    scanf("%lf", &tf);
    tc = (tf - 32) * 5/9;
    printf("%.2lf", tc);

    return 0;
}