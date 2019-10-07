#include <stdio.h>

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

void deslocamento(int array[], int i, int contador, int n)  
{
	if(contador == n) 
    {
		return;
	}
	else 
    {
		printf("%d ", array[i % n]);
		deslocamento(array, i + 1, contador + 1, n);
	}
}

int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    
    ler_array(array, n, 0);
    deslocamento(array, 1, 0, n);

    return 0;
}