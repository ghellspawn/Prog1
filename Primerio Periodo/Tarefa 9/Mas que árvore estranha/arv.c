#include <stdio.h>

typedef struct arv
{
    int esquerda, direita;
} height;

void bt(height tree[], int noAtual, int *altura, int alturaAtual)
{
    if(noAtual == -1)
    {
        if(alturaAtual > *altura)
        {
            *altura = alturaAtual;
        }

        return;
    }

    bt(tree, tree[noAtual].esquerda, altura, alturaAtual + 1);
    bt(tree, tree[noAtual].direita, altura, alturaAtual + 1);
}


int main()
{
    int qtdNos, qtdPais, raiz;
    scanf("%d%d%d", &qtdNos, &qtdPais, &raiz);

    height tree[qtdNos];

    int i;
    for(i = 0; i < qtdNos; i++)
    {
        tree[i].esquerda = -1;
        tree[i].direita = -1;
    }

    int pai;
    for(i = 0; i < qtdPais; i++)
    {
        scanf("%d", &pai);
        scanf("%d", &tree[pai].esquerda);
        scanf("%d", &tree[pai].direita);
    }

    int altura = 0;

    bt(tree, raiz, &altura, 0);

    printf("%d\n", altura);

    return 0;
}