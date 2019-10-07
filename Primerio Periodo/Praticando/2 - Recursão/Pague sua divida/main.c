#include <stdio.h>

void loop(int div, int reais, int res)
{
    if(res == 0)
    {
        printf("(antes) %d\n", div);
        printf("(depois) %d\n", res);
        return;
    }
    else
    {
        res = div - reais;
        printf("(antes) %d\n", div);
        printf("(depois) %d\n", res);
    }

    loop(res, reais, res);
}

int main()
{
    int div, reais;
    scanf("%d%d", &div, &reais);

    loop(div, reais, 0);

    return 0;
}