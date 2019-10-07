#include <stdio.h>

void comparar(int array[], int i, int *n, int *k) 
{                                                                                              
    if(i == 1000) //quando for igual a 1000 significa que atingiu completamente o array, aqui para.
    {
        scanf("%d", n);
        return;
    }
    else
    {
        scanf("%d", &array[i]); //como não bateu 1000 ainda, digite mais numeros
        comparar(array, i + 1, n, k);
        if(array[i] == *n)
        {
            *k += 1; //numero de vezes que tal numero foi repetido.
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
        array[0] = primeiro; //primeiro digito do array, no caso o 0, é igual ao primeiro digito
        comparar(array, 1, &n, &k); //chamei a função de comparação

        if(n == primeiro)
        {
            k += 1;
        }

        printf("%d appeared %d times\n", n, k); //x numero apareceu x vezes
        leitura(array); 
    }
    
}

int main()
{
    int array[1000]; //declaro o array
    leitura(array); //chamada recursiva do array

    return 0;
}