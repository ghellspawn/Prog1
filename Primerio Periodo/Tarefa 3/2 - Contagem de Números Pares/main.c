#include <stdio.h>

int res(int n, int cont)
{
    int resto = n%10;
    if(resto%2 == 0)
    {
        cont += 1; // == cont = cont + 1;
    }

    int resto2 = n/10;
    if(resto2==0)
    {
        return cont;
    }
    return res(resto2, cont);

}


int main()
{
    int n, resultado;
    scanf("%d", &n);
    resultado = res(n, 0);
    printf("%d\n", resultado); 
    
     

    //n1%2 = 0 -> par
    //n1%10 = sempre o ultimo digito
    //n1/10 = ignora o ultimo digito

    return 0;
}