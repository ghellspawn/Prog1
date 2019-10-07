#include <stdio.h>

int main()
{
    int A, B, C, resultado;
    scanf("%d%d%d", &A, &B, &C);
    resultado = 1;

    
    
    if(A==0 || B==0 || C==0)
    {
        resultado = 0;
    }

    else if(A==B || A==C || B==C)
    {
        resultado = 0;
    }

    else if(A+B == C || A+C == B || B+C == A)
    {
        resultado = 0;
    }

    if(resultado!=0)
    {
        printf("N\n");
    }

    else if(resultado==0)
    {
        printf("S\n");
    }

    return 0;    
}