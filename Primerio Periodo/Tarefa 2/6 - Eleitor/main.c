#include <stdio.h>

int main()
{
    int num1;
    scanf("%d", &num1);

    if(num1<16)
    {
        printf("nao eleitor\n");
    }

    else if(num1>=18 && num1<=65)
    {
        printf("eleitor obrigatorio\n");
    }

    else if(num1>=16 && num1<18 || num1>65)
    {
        printf("eleitor facultativo\n");
    }

    return 0;
}