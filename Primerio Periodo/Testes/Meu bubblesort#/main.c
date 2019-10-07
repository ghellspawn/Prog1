#include <stdio.h>

void imprimir_array(int array[], int n, int i)
{
	if(i == n-1)
	{
		printf("%d\n", array[i]);
		return;
	}

	printf("%d ", array[i]);
	imprimir_array(array, n, i+1);

}

void ler_array(int array[], int n, int i)
{
	if(i == n)
    {
        return;
    }	
	else
	{
		scanf("%d", &array[i]);
		ler_array(array, n, i+1);
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
	
    ler_array(array, n, 0);
	
    bubble(array, 0, 1, n);
	
    imprimir_array(array, n, 0);

	return 0;
}