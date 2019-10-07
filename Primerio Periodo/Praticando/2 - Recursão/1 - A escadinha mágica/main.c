#include <stdio.h>

void printar(int num, int aux2)
{
    if(aux2 == num)
    {
        printf("%d", aux2);
        return;
    }
    else
    {
        printf("%d ", aux2);
        printar(num, aux2 + 1);
    }
}

void linha(int num, int aux)
{
    if(aux > num)
    {
        return;
    }
    else
    {
        printar(aux, 1);
        printf("\n");
        linha(num, aux + 1);
    }
}

int main()
{
    int num;
    scanf("%d", &num);

    linha(num, 1);

    return 0;
}