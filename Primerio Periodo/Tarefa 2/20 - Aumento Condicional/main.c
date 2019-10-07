#include <stdio.h>

int main()
{
    double salario1, salario2;
    scanf("%lf", &salario1);

    if(salario1<=280)
    {
        salario2 = salario1 + (salario1*0.2);

        printf("%.2lf\n", salario1);
        printf("20\n");
        printf("%.2lf\n", salario2-salario1);
        printf("%.2lf\n", salario2);
    }

    else if(salario1>280 && salario1<=700)
    {
        salario2 = salario1 + (salario1*0.15);

        printf("%.2lf\n", salario1);
        printf("15\n");
        printf("%.2lf\n", salario2-salario1);
        printf("%.2lf\n", salario2);
    }

    else if(salario1>700 && salario2<1500)
    {   
        salario2 = salario1 + (salario1*0.1);

        printf("%.2lf\n", salario1);
        printf("10\n");
        printf("%.2lf\n", salario2-salario1);
        printf("%.2lf\n", salario2);
    }

    else if(salario1>=1500)
    {   
        salario2 = salario1 + (salario1*0.05);
        
        printf("%.2lf\n", salario1);
        printf("5\n");
        printf("%.2lf\n", salario2-salario1);
        printf("%.2lf\n", salario2);
    }

    return 0;
}