#include <stdio.h>

int maior_indice(int i, int n, int array[], int maiorInd)
{
    if(i == n)
    {
        return maiorInd;
    }
    else
    {
        if(array[i] > array[maiorInd])
        {
            maiorInd = i;
        }

        return maior_indice(i + 1, n, array, maiorInd);
    }
}

void ler_array(int i, int n, int array[])
{
    if(i < n)
    {
        scanf("%d", &array[i]);
        ler_array(i + 1, n, array);
    }
}

void imprimir_array(int i, int n, int array[])
{
    if(i < n)
    {
        printf("%d\n", array[i]);
        imprimir_array(i + 1, n, array);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int array[n];

    ler_array(0, n, array);

    int maiorInd = maior_indice(0, n, array, 0);

    int aux = array[n - 1];
    array[n - 1] = array[maiorInd];
    array[maiorInd] = aux;

    printf("\n");

    imprimir_array(0, n, array);

    return 0;
}