#include <stdio.h>

void calc(int n, double array[], int i, double j)
{
    if(i == n)
    {
        printf("%.2lf\n", j/n);
        return;
    }
    else
    {
        j += array[i];
        calc(n, array, i + 1, j);
    }
    
}

void read(int n, double array[], int i)
{
    if(i == n)
    {
        return;
    }
    else
    {
        scanf("%lf", &array[i]);
        read(n, array, i+1);
    }
}




int main()
{
    int n;
    scanf("%d", &n);
    double array[n];

    read(n, array, 0);
    calc(n, array, 0, 0);

    return 0;
}