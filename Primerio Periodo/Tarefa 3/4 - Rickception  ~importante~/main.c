#include <stdio.h>

int op(int t, int n, int aux)
{
    if(n == aux)
    {
        return t;
    }
    if(aux%2 == 0)
    {
        t += 3;
    }
    else
    {
        t += t%5;  
    }
    op(t, n, aux + 1);
}

int loop()
{
    int t, n;
    scanf("%d%d", &t, &n);

    printf("%d\n", op(t, n, 0));
    
}

int main()
{
    loop();
    
    return 0;
}