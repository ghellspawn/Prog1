#include <stdio.h>

int main()
{
    double salario, comp, porcent, saldo;
    scanf("%lf%lf", &salario, &comp);
    porcent = (comp/salario)*100;

    if(porcent>=(30))
    {
        printf("0.00\n");
    }

    else
    {
        saldo = ((30 - porcent)*salario)/100;
        printf("%.2lf\n", saldo);
    }

    return 0;
}