#include <stdio.h>

void imprimir_array(int i, int array[], int n)
{
    if(i == n)
    {
        return;
    }
    else
    {
        printf("%d\n", array[i]);
        imprimir_array(i + 1, array, n);
    }
}

void preencher(int guardar[], int i)
{
    if(i == 5)
    {
        return;
    }
    else
    {
        guardar[i] = -1;
        preencher(guardar, i + 1);
    }
    
}

void sorteio(int n, int d, int array[], int i, int guardar[], int j)
{
    if(j == -1)
    {
        return;
    }
    if(i == n)
    {
        return;
    }
    else
    {
        if(array[i]%10 == d)
        {
            guardar[j] = array[i];
            j--;
        }
        sorteio(n, d, array, i + 1, guardar, j);
    }
}

void bubble(int i, int j, int array[], int n)
{
    if(j == n)
    {
        i = i + 1;
        j = i + 1;
    }
    if(i == n - 1)
    {
        return;
    }
    if(array[i] < array[j])
    {
        int aux = array[i];
        array[i] = array[j];
        array[j] = aux;
    }

    bubble(i, j + 1, array, n);
}

void ler_array(int i, int array[], int n)
{
    if(i == n)
    {
        return;
    }
    else
    {
        scanf("%d", &array[i]);
        ler_array(i + 1, array, n);
    }
}

int main()
{
    int n, d, guardar[5];
    scanf("%d%d", &n, &d);

    int array[n];

    preencher(guardar, 0);

    ler_array(0, array, n);

    bubble(0, 1, array, n);

    sorteio(n, d, array, 0, guardar, 4);

    imprimir_array(0, guardar, 5);

    return 0;
}
