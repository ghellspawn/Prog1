#include <stdio.h>

int main()
{
    double ph;
    ph >=1.0 && ph<=14.0; 
    scanf("%lf", &ph);

    if(ph<7.0)
    {
        printf("Acida\n");
    }

    else if(ph>7.0)
    {
        printf("Basica\n");
    }

    else if(ph==7)
    {
        printf("Neutra\n");
    }

    return 0;
}