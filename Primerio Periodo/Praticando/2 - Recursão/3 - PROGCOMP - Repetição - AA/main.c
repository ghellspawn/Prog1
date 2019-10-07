#include <stdio.h>

void loop(int cont, double soma)
{
    double num;
    scanf("%lf", &num);

    if(num == -1)
    {
        printf("%.2lf\n", soma/cont);
        return;
    }
    else
    {
        soma = soma + num;
        loop(cont + 1, soma);
    }
    
}

int main()
{
    loop(0, 0);
    return 0;
}