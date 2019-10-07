#include <stdio.h>

int main()
{
    int a, b, c, d, m1, m2, dif;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    m1 = a*b;
    m2 = c*d;
    dif = m1 - m2;
    printf("DIFERENCA = %d", dif);

    return 0;
}