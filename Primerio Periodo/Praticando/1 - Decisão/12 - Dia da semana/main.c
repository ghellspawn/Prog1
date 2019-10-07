#include <stdio.h>

int main()
{
    int dia;
    dia >= 1 && dia <= 7;
    scanf("%d", &dia);

    if(dia==1)
    {
        printf("domingo\n");
    }

    else if(dia==2)
    {
        printf("segunda\n");
    }

    else if(dia==3)
    {
        printf("terca\n");
    }
    
    else if(dia==4)
    {
        printf("quarta\n");
    }

    else if(dia==5)
    {
        printf("quinta\n");
    }

    else if(dia==6)
    {
        printf("sexta\n");
    }

    else if(dia==7)
    {
        printf("sabado\n");
    }

    return 0;
}