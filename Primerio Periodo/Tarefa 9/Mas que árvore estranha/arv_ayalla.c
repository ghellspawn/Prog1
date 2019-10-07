#include <stdio.h>

struct arvore
{
    int esquerda , direita;
};

void run (struct arvore tree [] , int no_atual, int *altura , int altura_atual)
{
    if (no_atual == -1)
    {
        if (altura_atual > *altura)
        {
            *altura = altura_atual;
        }
 
        return;
    }
 
    run (tree , tree[no_atual].esquerda , altura , altura_atual + 1);
    run (tree , tree[no_atual].direita, altura , altura_atual + 1);
}

int main ()
{
    int quant_nos , quant_pais , raiz , i , pai;
    scanf("%d%d%d", &quant_nos , &quant_pais , &raiz);
 
    struct arvore tree [quant_nos];
 
    for (i = 0 ; i < quant_nos ; i++)
    {
        tree[i].esquerda = -1;
        tree[i].direita = -1;
    }
 
    for (i = 0 ; i < quant_pais ; i++)
    {
        scanf("%d", &pai);
        scanf("%d", &tree[pai].esquerda);
        scanf("%d", &tree[pai].direita);
    }
 
    int altura = 0;
 
    run (tree , raiz, &altura , 0);
 
    printf("%d\n", altura);
 
    return 0;
}