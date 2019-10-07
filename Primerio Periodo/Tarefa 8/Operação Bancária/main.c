#include <stdio.h>

void runMatrix(double matrix[][2], int contador)
{
    int i, j;
    double cred = 0, deb = 0;

    for(i = 0; i < contador; i++)
    {
        if(matrix[i][0] == 1)
        {
            cred += matrix[i][1];
        }
        if(matrix[i][0] == 0)
        {
            deb += matrix[i][1];
        }
    }
    

    printf("Creditos: R$ %.2lf\n", cred);
    printf("Debitos: R$ %.2lf\n", deb);
    printf("Saldo: R$ %.2lf\n", cred - deb);
}

int readMatrix(double matrix[][2])
{
    int i, j, contador = 0;
    double aux;

    for(i = 0; i < 100; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%lf", &aux);

            if(aux == -1)
            {
                return contador;
            }
            else
            {
                matrix[i][j] = aux;
                j++;
                scanf("%lf", &matrix[i][j]);
                contador += 1;
            }
        }
    }
}

int main()
{
    double matrix[100][2];

    int contador = readMatrix(matrix);
    runMatrix(matrix, contador);

    return 0;
}


//Ler matriz[DONE]
//Varrer o array executando as operações[DONE]
//Imprimir um resumo com os totais de valores a) creditados, b) debitados, e c) o saldo final resultante[DONE]