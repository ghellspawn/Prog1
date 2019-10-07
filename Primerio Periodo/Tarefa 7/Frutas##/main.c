#include <stdio.h>

void read(int n, int i, double v, char frutas[], double soma)
{
    if(i > n)
    {
        //aqui, ainda vou printar media de kg e dinheiro.
        return;
    }
    else
    {
        soma += v;
        scanf("%lf", &v);
        scanf("%[^\n]s", frutas);

        showup()
    }
    
    read()
}

int main()
{
    int n;
    double v;
    char frutas[255];

    scanf("%d", &n);
    
    read(n, 0, v, frutas, 0);

    return 0;
}


//ainda falta contar as palavras da string, a média de kg e reais.