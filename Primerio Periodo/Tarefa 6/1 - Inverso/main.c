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

void inverter_array(int array[], int n, int i, int j, int aux)
{
    if(i == j)
    {
        return;
    }

    aux = array[i];
    array[i] = array[j];
    array[j] = aux;
    
    inverter_array(array, n, i + 1, j - 1, aux);
}

int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    
    ler_array(array, n, 0);
    inverter_array(array, n, 0, n - 1, 0);
    imprimir_array(array, n, 0);

    return 0;
}