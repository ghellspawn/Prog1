#include <stdio.h>

void bubble(int i, int j, double array[])
{
    if(j == 4)
    {
        i = i + 1;
        j = i + 1; // o j reseta e vai para a frente do i
    }
    if(i == 3)
    {
        return;
    }
    if(array[i] > array[j])
    {
        double aux = array[i];
        array[i] = array[j];
        array[j] = aux;
    }

    bubble(i, j+1, array);
}

void ler_array(int i, double array[])
{
    if(i == 4)
    {
        return;
    }
    else
    {
        scanf("%lf", &array[i]);
        ler_array(i + 1, array);

    }
    
}

int main()
{
    double array[4];

    ler_array(0, array);
    bubble(0, 1, array);

    printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n", array[0], array[2], array[3], array[1]);
    
    return 0;
}