#include <stdio.h>

int loop(int num, int cont)
{
    int resto = num%10; //peguei o resto

    if(resto%2 == 0)
    {
        cont += 1;
    }

    int resto2 = num/10;

    if(resto2 == 0)
    {
        return cont;
    }

    return res(resto2, cont);
}

int main()
{
    int num, resultado;
    scanf("%d", &num);
    
    resultado = loop(num, 0);
    printf("%d\n", resultado);

    return 0;

    //  num%2 == 0 significa que ele é par
    //  num%10 acha o ultimo digito
    //  num/10 ignora o ultimo digito
    // a variavel resultado foi colodada só pra "embelezar" o printf,
    // ao invés de chamar a recursão dentro do printf.
}