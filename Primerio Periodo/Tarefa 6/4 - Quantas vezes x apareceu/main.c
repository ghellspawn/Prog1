#include <stdio.h>

void comparar(int array[], int i, int k, int n2)
{
    if(i == 10)
    {
        printf("%d\n", k);
        return;
    }
    if(n2 == array[i])
    {
        k++;
    }
    
    comparar(array, i + 1, k, n2);
}

void ler_array(int array[], int i)
{
	if(i == 10)
    {
        return;
    }
	else
	{
		scanf("%d", &array[i]);
		ler_array(array, i+1);
	}
}

int main()
{
    int array[10];

    ler_array(array, 0);
    
    int n2;
    scanf("%d", &n2);
    
    comparar(array, 0, 0, n2);

    return 0;
}

//array de 10 sendo o ultimo n�mero a ser contado
//quantas vezes apareceu.