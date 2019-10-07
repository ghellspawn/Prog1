#include <stdio.h>

void imprimir_array(int array[])
{
	printf("%d\n", array[0]);
    printf("%d\n", array[5]);

    return;
}

void ler_array(int array[], int i)
{
	if(i == 6)
    {
        return;
    }	
	else
	{
		scanf("%d", &array[i]);
		ler_array(array, i+1);
	}
}

void bubble(int array[], int i, int j)
{
	if(j == 6)
	{
		i = i+1;
		j = i+1;
	}
	if(i == 5)
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
	
    bubble(array, i, j+1);
}

int main()
{
	int array[6];
	
    ler_array(array, 0);
	
    bubble(array, 0, 1);
	
    imprimir_array(array);

	return 0;
}