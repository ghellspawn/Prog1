#include <stdio.h>

int main()
{
    double op, n1, n2;
    printf("1: adicao / 2: subtracao / 3: multiplicacao / 4: divisao\n");
    scanf("%lf", &op);
    scanf("%lf%lf", &n1, &n2);

    if(op==1)
    {
        printf("A adicao eh: %.2lf\n", n1+n2);
    }

    else if(op==2)
    {
        printf("A subtracao eh: %.2lf\n", n1-n2);
    }

    else if(op==3)
    {
        printf("A multiplicacao eh: %.2lf\n", n1*n2);
    }

    else if(op==4)
    {
        printf("A divisao eh: %.2lf\n", n1/n2);
    }

    return 0;
}