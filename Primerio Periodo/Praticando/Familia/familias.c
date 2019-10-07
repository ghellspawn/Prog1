#include <stdio.h>
#include <string.h>

typedef struct familia
{
    char nome[256];
    int idade, sexo, tamanho;
} fam;
 
void play(int n, int tocas[], int visitados[], int qtdTocas, fam resp[] , fam p[] )
{
    int i;
    int aux;
   
    for(i = 0; i < n; i++)
    {
        if(visitados[i] == 0)
        {
            aux = tocas[i];
 
            while(visitados[aux] == 0)
            {
                visitados[aux] = 1;
                aux = tocas[aux];
 
                if(p[aux].idade > resp[qtdTocas].idade)
                {
                    resp[qtdTocas].idade = p[aux].idade;
                    resp[qtdTocas].sexo = p[aux].sexo;
                    strcpy(resp[qtdTocas].nome, p[aux].nome);
                }
                else if(p[aux].idade == resp[qtdTocas].idade && p[aux].sexo == 0)
                {
                    resp[qtdTocas].idade = p[aux].idade;
                    resp[qtdTocas].sexo = p[aux].sexo;
                    strcpy(resp[qtdTocas].nome, p[aux].nome);
                }
 
                resp[qtdTocas].tamanho++;
            }

            qtdTocas++;
        }
 
    }
 
    printf("Quantidade de Familias: %d\n\n", qtdTocas);
 
    for(i = 0; i < qtdTocas; i++)
    {
        printf("Familia: %d\n", i + 1);
        printf("Tamanho da Familia: %d\n", resp[i].tamanho);
        printf("Integrante mais velho: %s\n", resp[i].nome);
        printf("Idade do integrante mais velho: %d\n\n", resp[i].idade);
    }
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
 
void readStruct(int n, fam p[])
{
    int i;
 
    for(i = 0; i < n; i++)
    {
        scanf(" %s", p[i].nome);
        scanf("%d", &p[i].idade);
        scanf("%d", &p[i].sexo);
    }
}
 
int main()
{
    int n, count;
    scanf("%d", &n);
 
    fam p[n];
    int tocas[n], visitados[n];
   
    readStruct(n, p);
 
    fam resp[n];
 
    for(count = 0; count < n; count++)
    {
        resp[count].idade = -1;
        resp[count].tamanho = 0;
    }
 
    ler_tocas(n, tocas, visitados);
 
    play(n, tocas, visitados, 0 , resp , p);
 
    return 0;
}