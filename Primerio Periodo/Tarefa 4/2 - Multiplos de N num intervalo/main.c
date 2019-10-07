#include <stdio.h>

int mult(int n, int a, int b, int cont)
{

    if(a>b)
    {
        if(cont == 0)
        {
            printf("INEXISTENTE\n");
        }
        
        return 0;
    }

    if(a%n == 0)
    {
        cont++;
        printf("%d\n", a);

    }
    mult(n, a + 1, b, cont);
}

int main()
{
    int n, a, b;
    scanf("%d%d%d", &n, &a, &b);
    mult(n, a, b, 0);

    return 0;
}