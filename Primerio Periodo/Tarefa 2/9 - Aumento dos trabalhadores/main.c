#include <stdio.h>

int main()
{
    double salario;
    double salario2;
    scanf("%lf", &salario);

    if(salario>500)
    {
        salario2 = salario+(salario*0.1);
        printf("%.2lf", salario2);
    }

    else if(salario>300 && salario<=500)
    {
        salario2 = salario+(salario*0.07);
        printf("%.2lf", salario2);
    }

    else if(salario<=300)
    {
        salario2 = salario+(salario*0.05);
        printf("%.2lf", salario2);
    }

    return 0;

}