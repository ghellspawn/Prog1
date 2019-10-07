#include <stdio.h>

void loop(int qtd, int count, char pmov, int px, int *coins)
{
    char aux;

    if(count == qtd)
    {
        return;
    }
   scanf(" %c", &aux);
   if(aux == 'D')
   {
       if(px == 0 && pmov == 'D')
       {
           *coins += 1;
       }
       
       px += 1;
   }
   else if(aux == 'C')
   {
       if(px == 0 && pmov == 'C')
       {
           *coins += 1;
       }
       
       px -= 1;
   }
   loop(qtd, count + 1, aux, px, coins);
}


int main()
{

    int qtd, px = 0, coins = 0;
    char primov;
    scanf("%d", &qtd);
    scanf(" %c", &primov);
    qtd -= 1;
    if(primov == 'D')
    {
        px += 1;
    }
    else
    {
        px -= 1;
    }
    loop(qtd, 0, primov, px, &coins);
    printf("%d\n", coins);
    

    //muralha => y - x = 0
    // ele pode ir para direita, 'D', e sair da posição (x, y) para posição (x+1, y)
    // ou para cima, 'C', e sair da posição (x, y) para posição (x, y+1)
    // saida: quantas moedas de prata são necessárias para realizar todo o percurso, 
    // ou seja, quantas vezes Vaqueiro vai atravessar a reta y - x = 0 durante sua viagem
    
    return 0;
}