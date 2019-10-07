#include <stdio.h>

int seq(int a)
{
    if(a == 1)
    {
        return 1;
    }

    else if(a%2 == 0)
    {
        return 1 + seq(a/2);
    }
    else
    {
        return 1 + seq((a*3) + 1);
    }
}

void loop(int a, int b, int *maior)
{
    if(a>b)
    {
        return;
    }
    else
    {
        int aux = seq(a);
        if(aux > *maior)
        {
            *maior = aux;
        }
        loop(a + 1, b, maior);
    }
    
}

void multiplas_entradas()
{
    int a, b;
    if(scanf("%d %d", &a, &b) == EOF)
    {
        return;
    }
    else
    {
        int maior = 0;
        if(a>b)
        {
            loop(b, a, &maior);
        }
        else
        {
            loop(a, b, &maior);
 
        }
        
        printf("%d %d %d\n", a, b, maior);
        multiplas_entradas();
    }
    
}

int main()
{
    multiplas_entradas();
    return 0;
}