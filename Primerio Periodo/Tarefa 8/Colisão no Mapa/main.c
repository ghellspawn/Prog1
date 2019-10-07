#include <stdio.h>

void begin(int n, int m, int matrix[][m], int cont, int qtdC, int pI, int pJ, char comandos[])
{
    if(cont == qtdC)
    {
        printf("(%d,%d)\n", pI, pJ);
        return;
    }
    else
    {
        if(comandos[cont] == 'C')
        {
            if(matrix[pI - 1][pJ] == 1 && pI - 1 >= 0)
            {
                begin(n, m, matrix, cont + 1, qtdC, pI - 1, pJ, comandos);
            }
            else
            {
                begin(n, m, matrix, cont + 1, qtdC, pI, pJ, comandos);
            }
        }
        if(comandos[cont] == 'B')
        {
            if(matrix[pI + 1][pJ] == 1 && pI + 1 < n)
            {
                begin(n, m, matrix, cont + 1, qtdC, pI + 1, pJ, comandos);
            }
            else
            {
                begin(n, m, matrix, cont + 1, qtdC, pI, pJ, comandos);
            }
        }
        if(comandos[cont] == 'E')
        {
            if(matrix[pI][pJ - 1] == 1 && pJ - 1 >= 0)
            {
                begin(n, m, matrix, cont + 1, qtdC, pI, pJ - 1, comandos);
            }
            else
            {
                begin(n, m, matrix, cont + 1, qtdC, pI, pJ, comandos);
            }
        }
        if(comandos[cont] == 'D')
        {
            if(matrix[pI][pJ + 1] == 1 && pJ + 1 < m)
            {
                begin(n, m, matrix, cont + 1, qtdC, pI, pJ + 1, comandos);
            }
            else
            {
                begin(n, m, matrix, cont + 1, qtdC, pI, pJ, comandos);
            }
        }


    }
    
}

void readMatrix(int n, int m, int matrix[][m], int i, int j)
{
    if(j == m)
    {
        i += 1;
        j = 0;
    }
    if(i == n)
    {
        return;
    }
 
    scanf("%d", &matrix[i][j]);
    readMatrix(n, m, matrix, i, j + 1);
}

int main()
{
    int n, m, i, j, qtdC, pI, pJ;
    scanf("%d%d", &n, &m);

    int matrix[n][m];
    readMatrix(n, m, matrix, 0, 0);
    
    scanf("%d", &qtdC);
    char comandos[qtdC];

    for(i = 0; i < qtdC; i++)
    {
        scanf(" %c", &comandos[i]);
    }

    scanf("%d%d", &pI, &pJ);

    begin(n, m, matrix, 0, qtdC, pI, pJ, comandos);
}