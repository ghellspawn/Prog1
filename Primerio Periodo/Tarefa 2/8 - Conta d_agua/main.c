#include <stdio.h>

int main()
{
    int consumo, resultado;
    scanf("%d", &consumo);

    if(consumo<=10)
    {
        printf("7\n");
    }

    else if(consumo>10 && consumo<=30)
    {
        resultado = 7 + (consumo - 10);
        printf("%d\n", resultado);
    }

    else if(consumo>30 && consumo <=100)
    {
        resultado = 7 + 20 + ((consumo - 30)*2);
        printf("%d\n", resultado);
    }

    else if(consumo>100)
    {
        resultado = 7 + 20 + 140 + ((consumo - 100)*5);
        printf("%d\n", resultado);
    }

    return 0;
}