#include <stdio.h>
 
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
    int n, m;
    scanf("%d %d", &n, &m);
    int matrix[n][m];
   
    readMatrix(n, m, matrix, 0, 0);
 
    return 0;
}