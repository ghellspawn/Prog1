#include <stdio.h>

int main()
{
    int reg;
    scanf("%d", &reg);

    if(reg==1)
    {
        printf("Nordeste\n");
    }

    else if(reg==2)
    {
        printf("Norte\n");
    }

    else if(reg==3 || reg ==4)
    {
        printf("Centro-Oeste\n");
    }

    else if(reg>=5 && reg<=9)
    {
        printf("Sul\n");
    }

    else if(reg>=10 && reg<=15)
    {
        printf("Sudeste\n");
    }

    return 0;
}