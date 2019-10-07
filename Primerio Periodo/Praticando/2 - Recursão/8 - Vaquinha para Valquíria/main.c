#include <stdio.h>

void loop(double valor, double soma, double media, double i)
{
    if(valor < 0)
    {
        printf("%.2lf\n", soma);
        printf("%.2lf\n", media);
        return;
    }
    else
    {
        scanf("%lf", &valor);
        
        if(valor >= 0)
        {
            soma += valor;
            i++;
            media = (soma/i);
        }
    }
    
    loop(valor, soma, media, i);
}

int main()
{
    loop(0, 0, 0, 0);

    return 0;
}