#include <stdio.h>

int main ()
{
    int num, horas;
    double valor, salary;

    scanf("%d %d", &num, &horas);
    scanf("%lf", &valor);
    salary = horas*valor;
    printf("NUMBER = %d\n", num);
    printf("SALARY = R$ %.2lf\n", salary);

    return 0;
}
