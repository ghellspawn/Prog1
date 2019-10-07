#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double p, qtdp, qtda;
    scanf("%lf%lf", &qtdp, &qtda);
    p = (qtda/qtdp)*100;

    if(p>=0 && p<20)
    {
        printf("%.2lf%% ", p);
        printf("4.40%% ");
        printf("Pessimo\n");
    }

    else if(p>=20 && p<40)
    {
        printf("%.2lf%% ", p);
        printf("31.65%% ");
        printf("Ruim\n");
    }

    else if(p>=40 && p<60)
    {
        printf("%.2lf%% ", p);
        printf("56.82%% ");
        printf("Bom\n");
    }

    else if(p>=60 && p<80)
    {
        printf("%.2lf%% ", p);
        printf("80.00%% ");
        printf("Muito Bom\n");
    }

    else if(p>=80 && p<=100)
    {
        printf("%.2lf%% ", p);
        printf("94.00%% ");
        printf("Excelente\n");
    }
	return 0;
}