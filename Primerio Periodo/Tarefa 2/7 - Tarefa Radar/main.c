#include <stdio.h>

int main()
{
    double velomax, veloauto;
    scanf("%lf%lf", &velomax, &veloauto);

    if(veloauto<=(velomax + (velomax*0.2)) && veloauto>velomax)
    {
        printf("85.13\n");
        printf("4\n");
    }

    else if(veloauto>(velomax + (velomax*0.2)) && veloauto<=(velomax + velomax*0.5))
    {
        printf("127.69\n");
        printf("5\n");
    }

    else if(veloauto>(velomax + (velomax*0.5)))
    {
        printf("574.62\n");
        printf("7\n");
    }

    else if(veloauto<=velomax)
    {
        printf("0.00\n");
        printf("0\n");
    }

    return 0;
}