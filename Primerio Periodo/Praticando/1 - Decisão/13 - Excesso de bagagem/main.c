#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double bag, taxa;
    scanf("%lf", &bag);

    if(bag<=20)
    {
        printf("0.00\n");
    }

    else if(bag>=21 && bag<=25)
    {
        taxa = (bag-20)*12.50;
        printf("%.2lf\n", taxa);
    }

    else if(bag>=26 && bag<=30)
    {
        taxa = (bag-20)*32.75;
        printf("%.2lf\n", taxa);
    }

    else
    {
        printf("PESO LIMITE EXCEDIDO\n");
    }
	return 0;
}