#include <stdio.h>

int loop(int contqp, int contql, int biggestnumber, int cont, int aux)
{
    int qp, ql;
    
    if(cont==7)
    {
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n", contqp);
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n", contql);

        return aux;
    }
    else
    {
        scanf("%d%d", &qp, &ql);

        if(qp >= 5)
        {
            contqp++;
        }
        if(ql >= 100)
        {
            contql++; 
        }
        if(ql > biggestnumber)
        {
            biggestnumber = ql;
            aux = cont;
        }
        
        return loop(contqp, contql, biggestnumber, cont + 1, aux);

    }
}


int main()
{
    int dia = loop(0, 0, 0, 0, 0);

    if(dia == 0)
    {
        printf("DIA QUE MAIS PRODUZIU: DOMINGO\n");
    }
    else if(dia == 1)
    {
        printf("DIA QUE MAIS PRODUZIU: SEGUNDA\n");
    }
    else if(dia == 2)
    {
        printf("DIA QUE MAIS PRODUZIU: TERCA\n");
    }
    else if(dia == 3)
    {
        printf("DIA QUE MAIS PRODUZIU: QUARTA\n");
    }
    else if(dia == 4)
    {
        printf("DIA QUE MAIS PRODUZIU: QUINTA\n");
    }
    else if(dia == 5)
    {
        printf("DIA QUE MAIS PRODUZIU: SEXTA\n");
    }
    else if(dia == 6)
    {
        printf("DIA QUE MAIS PRODUZIU: SABADO\n");
    }
    return 0; 
}