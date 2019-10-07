#include <stdio.h>

int remais(int moda[], int i, int maisvezes, int k)
{
    if(i == 11) 
    {
        return k;
    }
    if(moda[i] > maisvezes)
    {
        maisvezes = moda[i];
        k = i;
    }
    return remais(moda, i+1, maisvezes, k);
}

int compare(char gabarito[], char respostas[], int i, int acertos)
{
    if(i == 10)
    {
        return acertos;
    }
    else
    {
        if(gabarito[i] == respostas[i])
        {
            acertos++;
        }
        
        return compare(gabarito, respostas, i + 1, acertos);
    }
    
}

void ler_string(char gabarito[], int acmedia, int qalunos, int moda[])
{
    char aux[11];
    int sos;

    scanf("%d %s", &sos, aux);
    if(sos == 9999)
    {
        int res = remais(moda, 0, -1, 0);
        printf("%.1lf%%\n%d.0\n", (((double) acmedia)/qalunos)*100, res);
        return;
    }
    
    int acertos = compare(gabarito, aux, 0, 0);
    moda[acertos] += 1;

    if(acertos >= 6)
    {
        acmedia++;
    }

    printf("%d %d.0\n", sos, acertos);

    ler_string(gabarito, acmedia, qalunos + 1, moda);
}

int main()
{
    char gabarito[11];
    scanf("%s", gabarito);
    
    int moda[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    ler_string(gabarito, 0, 0, moda);


    return 0;
}