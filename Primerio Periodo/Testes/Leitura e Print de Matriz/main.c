#include <stdio.h>
 
void print_column(int m, int matrix[][m], int i, int j)
{
    if(j == m)
    {
        return;
    }
    else
    {
        if(j == m-1)
        {
            printf("%d\n", matrix[i][j]);
        }
        else
        {
            printf("%d ", matrix[i][j]);
        }
       
        print_column(m, matrix, i, j + 1);
    }
}
 
void print_lines(int n, int m, int matrix[][m], int i)
{
        if(i == n)
        {
            return;
        }
        else
        {
            print_column(m, matrix, i, 0);
            print_lines(n, m, matrix, i + 1);
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
    int n, m;
    scanf("%d %d", &n, &m);
    int matrix[n][m];
 
    read_lines(n, m, matrix, 0);
    print_lines(n, m, matrix, 0);
 
    return 0;
}