#include <stdio.h>

int main()
{
    int canal;
    printf("Digite um numero de um canal de tv:\n");
    scanf("%d", &canal);

    if(canal==2)
    {
        printf("SBT\n");
    }

    else if(canal==4)
    {
        printf("BAND\n");
    }

    else if(canal==6)
    {
        printf("REDETV!\n");
    }

    else if(canal==9)
    {
        printf("RECORD\n");
    }

    else if(canal==13)
    {
        printf("GLOBO\n");
    }

    else
    {
        printf("Canal Invalido\n");
    }

    return 0;
}