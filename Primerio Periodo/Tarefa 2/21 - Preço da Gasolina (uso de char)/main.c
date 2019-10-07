#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char cod;
    double litros, desc, valor, dvalor;
    scanf("%lf %c", &litros, &cod);

    if(cod=='A' && litros<21)
    {
        valor = 1.90*litros;
        desc = valor - (0.03*valor);
        printf("R$ %.2lf", desc);
    }

    else if(cod=='A' && litros>=21)
    {
        valor = 1.90*litros;
        desc = valor - (0.05*valor);
        printf("R$ %.2lf", desc);
    }

    else if(cod=='G' && litros<21)
    {
        valor = 2.50*litros;
        desc = valor - (0.04*valor);
        printf("R$ %.2lf", desc);
    }

    else if(cod=='G' && litros>=21)
    {
        valor = 2.50*litros;
        desc = valor - (0.06*valor);
        printf("R$ %.2lf", desc);
    }

    else if(cod=='D' && litros<26)
    {
        valor = 1.66*litros;
        printf("R$ %.2lf", valor);
    }

    else if(cod=='D' && litros>=26)
    {
        valor = 1.66*litros;
        desc = valor - (0.04*valor);
        printf("R$ %.2lf", desc);
    }
	return 0;
}