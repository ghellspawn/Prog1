#include <stdio.h>
#include <stdlib.h>

void diag(int x, double matrix[][x])
{
    int i, j;
    double soma = 0, alfa;
    double biggest = -9999999999;

    for(i = 0 ; i < x; i++)
    {
        for(j = 0; j < x; j++)
        {
            if(i != j)
            {
               soma += fabs(matrix[i][j]); 
               
            }
            
        }
        
        double alfa = soma/fabs(matrix[i][i]);
        
        soma = 0;
        
        if(alfa > biggest)
        {
            biggest = alfa;
        }
    }

    if(biggest < 1)
    {
        printf("SIM\n");
    }
    else
    {
        printf("NAO\n");
    }
    

    return;
}

void read(int x, double matrix[][x])
{
    int i, j;

    for(i = 0 ; i < x; i++)
    {
        for(j = 0; j < x; j++)
        {
            scanf("%lf", &matrix[i][j]);
        }
    }

    return;
}

int main()
{
    int x;
    scanf("%d", &x);
    double matrix[x][x];

    read(x, matrix);
    diag(x, matrix);
    
    return 0;
}