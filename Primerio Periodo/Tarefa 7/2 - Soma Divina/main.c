#include <stdio.h>
 
void showSum(int s, int squareSum[][s], int i, int j)
{
    if(j == s)
    {
        i += 1;
        j = 0;
    }
    if(i == s)
    {
        return;
    }
 
    printf("%d\n", squareSum[i][j]);
    showSum(s, squareSum, i, j + 1);
}

void sum(int s, int squareSum[][s], int matrix1[][s], int matrix2[][s], int i, int j)
{
    if(j == s)
    {
        i += 1;
        j = 0;
    }
    if(i == s)
    {
        return;
    }
 
    squareSum[i][j] = matrix1[i][j] + matrix2[i][j];
    sum(s, squareSum, matrix1, matrix2, i, j + 1);
}
 
void readMatrix2(int s, int matrix2[][s], int i, int j)
{
    if(j == s)
    {
        i += 1;
        j = 0;
    }
    if(i == s)
    {
        return;
    }
 
    scanf("%d", &matrix2[i][j]);
    readMatrix2(s, matrix2, i, j + 1);
}
 
void readMatrix1(int s, int matrix1[][s], int i, int j)
{
    if(j == s)
    {
        i += 1;
        j = 0;
    }
    if(i == s)
    {
        return;
    }
 
    scanf("%d", &matrix1[i][j]);
    readMatrix1(s, matrix1, i, j + 1);
}
 
int main()
{
    int s;
    scanf("%d", &s);
    int matrix1[s][s];
    int matrix2[s][s];
    int squareSum[s][s];
    
    if(s == 0)
    {
        printf("Vazia\n");
        return 0;
    }
 
    readMatrix1(s, matrix1, 0, 0);
    readMatrix2(s, matrix2, 0, 0);
    sum(s, squareSum, matrix1, matrix2, 0, 0);
    showSum(s, squareSum, 0, 0);
    
    return 0;
}