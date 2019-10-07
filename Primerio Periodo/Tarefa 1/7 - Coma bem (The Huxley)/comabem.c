#include <stdio.h>

int main()
{
    double pago, bempago;
    scanf("%lf", &pago);
    bempago = pago + (pago*0.1);
    printf("%.2lf", bempago);

    return 0;
}