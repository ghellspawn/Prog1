#include <stdio.h>

void loop(double arv, int cont, double enf, double penf, double soma, double res)
{
    if(cont == 4)
    {
        printf("%.2lf\n%.2lf\n", res+arv, (res+arv)/21.00);
        return;
    }
    else
    {
        scanf("%lf %lf", &enf, &penf);
        soma = (enf * penf);
        res += soma;
        cont++;
    }
    loop(arv, cont, enf, penf, soma, res);
}

int main()
{
    double arv;
    scanf("%lf", &arv);

    loop(arv, 1, 0, 0, 0, 0);

    return 0;
}

