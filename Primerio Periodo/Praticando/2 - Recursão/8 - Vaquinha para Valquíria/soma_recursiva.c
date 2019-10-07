#include <stdio.h>

void loop(int valor, int soma)
{
    if(valor < 0)
    {
        printf("%d\n", soma);
        return;
    }
    else
    {
        scanf("%d", &valor);
        
        if(valor >= 0)
        {
            soma += valor;
        }
    }
    
    loop(valor, soma);
}

int main()
{
    loop(0, 0);

    return 0;
}