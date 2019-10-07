#include <stdio.h>

void call(int n)
{
    printf("Digite um numero (negativo para parar o programa):\n");
    scanf("%d", &n);
    
    if(n < 0)
    {
        return;
    }
    else
    {
        printf("Numero: %d\n", n);
        call(n);
    }
}

int main()
{
    int n;
    call(n);
    
    return 0;
}