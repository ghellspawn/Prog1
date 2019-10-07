#include <stdio.h>

int div(int n, int aux, int cont)
{
    if(n <= aux )
    {
        if(n%aux == 0 && aux%3 == 0)
        {
            cont += 1;
        }
        return cont;
    }
    if(n%aux == 0 && aux%3 == 0)
    {
        cont += 1;
    }
    
    return div(n, aux + 3, cont);
}

int main()
{
    int n, r;
    scanf("%d", &n);
    r = div(n, 3, 0);
    if(r == 0)
    {
        printf("O numero nao possui divisores multiplos de 3!\n");
    }
    else 
    {
        printf("%d\n", r);
    }
    
    return 0;
}