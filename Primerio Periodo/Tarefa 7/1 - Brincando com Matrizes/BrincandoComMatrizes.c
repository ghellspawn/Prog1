#include <stdio.h>

int diagonal(int n, int m, int matriz[][m], int i, int j, int sum)
{
	if(i >= n || j >= m)
	{
        return sum;
    }
	
    diagonal(n, m, matriz, i+1, j+1, sum+(matriz[i][j]));
}

int biggest(int matriz[][3], int i, int j, int bigger)
{
	if(j == 3)
	{
		i += 1;
		j = 0;
	}
	if(i == 3)
	{
        return bigger;
    }
	if(matriz[i][j] > bigger)
	{
        bigger = matriz[i][j];
    }

	return biggest(matriz, i, j+1, bigger);
}

double media(int matriz[][3], int i, int j, double mediaF)
{
	if(j == 3)
	{
		i += 1;
		j = 0;
	}
	if(i == 3)
	{
        return mediaF/9;
    }
	
    return media(matriz, i, j+1, mediaF+(matriz[i][j]));
}

void ler(int matriz[][3], int i, int j)
{
	if(j == 3)
	{
		i += 1;
		j = 0;
	}
	if(i == 3)
	{
        return;
    }
	
    scanf("%d", &matriz[i][j]);
	
    ler(matriz, i, j+1);
}

int main()
{
	int matriz[3][3], delta;
	ler(matriz, 0, 0);
	
    double mediaF = media(matriz, 0, 0, 0);
	int biggestF = biggest(matriz, 0 ,0, matriz[0][0]);
	int diagonalF = diagonal(3, 3, matriz, 0, 0, 0);
	
    if(biggestF > 0)
	{
        delta = 1;
    }
	else if(biggestF < 0)
	{
        delta = -1;
    }
	else 
    {
        delta = 0;
    }

	printf("%.2lf %d %d %d\n", mediaF, biggestF, delta, diagonalF);
	
    return 0;
}