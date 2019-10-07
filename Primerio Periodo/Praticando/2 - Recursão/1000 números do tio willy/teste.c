#include <stdio.h>

void comparar(int array[], int i, int *n, int *k, int primeiro) 
{                                                                                              
    if(i == 1000) //quando for igual a 1000 significa que atingiu completamente o array, aqui para.
    {
        scanf("%d", n);
        return;
    }
    else
    {
        if(i == 0)
        {
            array[0] = primeiro;
            comparar(array, i + 1, n, k, primeiro);
        }
        else
        {
            scanf("%d", &array[i]); 
            comparar(array, i + 1, n, k, primeiro);
            
        }

        if(array[i] == *n)
            {
                *k += 1;
            } 
    }
    
}

void leitura(int array[])
{
    int primeiro;   //primeiro digito do usuário
    int n, k = 0;
    scanf("%d", &primeiro); //escaniei o primeiro digito

    if(primeiro == -1)
    {
        return; //se ele for iqual a zero, breu, morre aqui
    }
    else //se não for, segue o fluxo, continua
    {   
        comparar(array, 0, &n, &k, primeiro); //chamei a função de comparação
        printf("%d appeared %d times\n", n, k);
        leitura(array); 
    }
    
}

int main()
{
    int array[1000]; //declaro o array
    leitura(array); //chamada recursiva do array

    return 0;
}