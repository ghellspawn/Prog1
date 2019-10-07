#include <stdio.h>

int main()
{
    int d1, d2, m;
    double f;
    scanf("%d%d%d", &d1, &d2, &m);

    f = (10.00*m)/(d1+d2);

    if(f <= 2)
    {
        printf("Scar conseguiu criar uma frustração %.2lf na turma\n", f);
        printf("Mais um fracasso...\n");
    }

    else if(f > 2 && f <  4)
    {
        printf("Scar conseguiu criar uma frustração %.2lf na turma\n", f);
        printf("Consegui lacaios preciosos\n");
    }

    else if(f >= 4)
    {
        printf("Scar conseguiu criar uma frustração %.2lf na turma\n", f);
        printf("Eu matei Mufasa\n");
    }

    return 0;
}