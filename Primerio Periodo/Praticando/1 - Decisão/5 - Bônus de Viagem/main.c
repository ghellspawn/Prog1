#include <stdio.h>

int main()
{
    double salario, ajuste;
    scanf("%lf", &salario);
    ajuste = salario*0.75;

    if(ajuste<2000)
    {
        printf("ARGENTINA\n");
    }

    else if(ajuste>2000 && ajuste<3000)
    {
        printf("ESPANHA\n");
    }

    else if(ajuste>3000)
    {
        printf("ALEMANHA\n");
    }

    return 0;
}