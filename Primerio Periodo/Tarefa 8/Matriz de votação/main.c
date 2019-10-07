#include <stdio.h>
 
void column_sum(int n, int m, int matrix[][m], int i, int j, int sum)
{
    if(j == m)
    {
        return;
    }
    if(i == n)
    {
        printf("Princesa %d: %d voto(s)\n", j+1, sum);
        column_sum(n, m, matrix, 0, j + 1, 0);
    }
    else
    {
        sum+= matrix[i][j];
        column_sum(n, m, matrix, i + 1, j, sum);
    }
}
 
void read_column(int m, int matrix[][m], int i, int j)
{
    if(j == m)
    {
        return;
    }
    else
    {
        scanf("%d", &matrix[i][j]);
        read_column(m, matrix, i, j + 1);
    }
}
 
void read_lines(int n, int m, int matrix[][m], int i)
{
        if(i == n)
        {
            return;
        }
        else
        {
            read_column(m, matrix, i, 0);
            read_lines(n, m, matrix, i + 1);
        }
}
 
int main()
{
    int p, e;
    scanf("%d %d", &p, &e);
    int n = e, m = p;
    int matrix[n][m];
 
    read_lines(n, m, matrix, 0);
    column_sum(n, m, matrix, 0, 0, 0);
 
    return 0;
}