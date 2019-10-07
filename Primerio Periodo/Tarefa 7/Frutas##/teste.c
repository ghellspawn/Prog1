#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, i, j, kgDay = 0;
    double kg, price, priceDay, totalKg;
    char fruits[256];

    scanf("%d", &n);

    for(i = 0; i < n; i++) //leitura do preço e frutas baseado em "n".
    {
        scanf("%lf", &priceDay);
        scanf(" %[^\n]s", fruits);

        int size = strlen(fruits);

        for(j = 0; j < size; j++) //quantidade de frutas digitadas, sendo "j" o indice do array.
        {
            if(fruits[j] == ' ')
            {
                kgDay += 1;
            }
        }

        kgDay += 1;
        totalKg += kgDay;
        price += priceDay;

        printf("dia %d: %d kg\n", i + 1, kgDay);

        kgDay = 0;
    }

    printf("%.2lf kg por dia\n", totalKg/(double)n);
    printf("R$ %.2lf por dia\n", price/(double)n);
}