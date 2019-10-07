#include <stdio.h>

void play(int n, int tocas[], int visitados[], int qtdTocas)
{
    int i;
    int aux;
    
    for(i = 0; i < n; i++)
    {
        if(visitados[i] == 0)
        {
            qtdTocas++;
            aux = tocas[i];

            while(visitados[aux] == 0)
            {
                visitados[aux] = 1;
                aux = tocas[aux];
            }
        }

    }

    printf("%d\n", qtdTocas);
}

void ler_tocas(int n, int tocas[], int visitados[])
{
    int i;

    for(i = 0; i < n; i++)
    {
        visitados[i] = 0;
        scanf("%d", &tocas[i]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int tocas[n], visitados[n];

    ler_tocas(n, tocas, visitados);

    play(n, tocas, visitados, 0);

    return 0;
}