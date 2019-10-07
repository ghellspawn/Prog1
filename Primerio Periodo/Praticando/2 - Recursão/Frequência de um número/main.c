#include <stdio.h>

int loop(int qtd, int n, int digi, int i, int cont)
{
    if(cont==qtd)
    {
        printf
        return;
    }
    else
    {
        scanf("%d%d", &qtd, &n);
        
        if(i<qtd)
        {
            scanf("%d", &digi);
            return loop(qtd, n, digi, i + 1, cont);
        }
        if(i==qtd)
        {
            return loop(qtd, n, digi, i, cont);
        }

    }
    
}

int main()
{
    loop();

    return 0;
}