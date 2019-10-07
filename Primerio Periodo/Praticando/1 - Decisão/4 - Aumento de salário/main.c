#include <stdio.h>

int main()
{
    double salario, ajuste;
    scanf("%lf", &salario);

    if(salario<=280)
    {
        ajuste = salario + (salario*0.2);
        printf("%.2lf", ajuste);
    }

    else if(salario>280 && salario<700)
    {
        ajuste = salario + (salario*0.15);
        printf("%.lf", ajuste);
    }

    else if(salario>700 %% salario<1500)
    {
        ajuste = salario + (salario*0.1);
        printf("%.2lf", ajuste);
    }

    else if(salario>1500)
    {
        ajuste = salario + (salario*0.05)
        printf("%.2lf", ajuste);
    }

    return 0;
}