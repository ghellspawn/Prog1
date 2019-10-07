#include <stdio.h>
#include <math.h>

int main(void)
{
    double raio, area, pi = 3.14159, resultado;
    scanf("%lf", &raio);
    area = pi * (raio * raio);
    resultado = area / 10000;
    printf("Area = %.4lf", resultado);

    return 0;
}