#include <stdio.h>

void loop(double num, int cont, double multa, double res)
{
    if(num == 999)
    {
        printf("%.2lf\n%d\n", res, cont);
        return;
    }
    else
    {
        if(num > 2)
        {
            multa = ((num-2) * 12.89); 
            cont ++;
            res += multa;

        }
        
        scanf("%lf", &num);
    }
    loop(num, cont, multa, res);
}

int main()
{
    double num;
    scanf("%lf", &num);

    loop(num, 0, 0, 0);

    return 0;
}