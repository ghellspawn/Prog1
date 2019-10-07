#include <stdio.h>

void compare(int array[], int n, int i, int j, int aux)
{
    if(array[0] == aux)
    {
        printf("Menor valor: %d\n", array[0]);
        printf("Posicao: %d\n", j);
        return;
    }
    else
    {
        aux = array[i];
        compare(array, n, i + 1, j + 1, aux);
    }

    
}

void read(int array[], int n, int i)
{
	if(i == n)
    {
        return;
    }
	else
	{
		scanf("%d", &array[i]);
		read(array, n, i+1);
	}
}

void bubble(int array[], int i, int j, int n)
{
	if(j == n)
	{
		i = i+1;
		j = i+1;
	}
	if(i == n-1)
	{
        return;
    }
	if(array[i] > array[j])
	{
		int aux;
		aux = array[i];
		array[i] = array[j];
		array[j] = aux;
	}
	bubble(array, i, j+1, n);
}

int main()
{
	int n;
	scanf("%d", &n);
	int array[n];

	read(array, n, 0);
	bubble(array, 0, 1, n);
	compare(array, n, 0);

	return 0;
}