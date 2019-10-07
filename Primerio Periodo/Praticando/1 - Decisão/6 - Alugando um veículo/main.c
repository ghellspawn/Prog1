#include <stdio.h>

int main()
{
    int qdias, km;
    double res;
    scanf("%d%d", &qdias, &km);

    if(km<=100*qdias)
    {
        res = (qdias*90);
        printf("%.2lf\n", res);
    }

    else if(km>100*qdias)
    {
        res = (qdias*90) + (km-(100*qdias))*12;
        printf("%.2lf\n", res);
    }

    return 0;
}