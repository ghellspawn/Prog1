#include <stdio.h>

void loop(int leituras, int cap, int cont, int s, int e, int calc, int res)
{
    if(cont == leituras)
    {
        if(res <= cap)
        {
            printf("N\n");
            return;
        }
        if(res > cap)
        {
            printf("S\n");
            return;
        }
    }
    else
    {
        scanf("%d %d", &s, &e);
        calc = e - s;
        res += calc;
        cont++;
    }
    
    loop(leituras, cap, cont, s, e, calc, res);
}

int main()
{   
    int leituras, cap;
    scanf("%d %d", &leituras, &cap);

    loop(leituras, cap, 0, 0, 0, 0, 0);
    
    return 0;
}