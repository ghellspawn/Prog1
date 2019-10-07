#include <stdio.h>

void loop(int num, int aux, int maior)
{
    if(num == 0)
    {   
        printf("%d\n", maior);
        return;
    }
    else
    {
        aux = num;

        scanf("%d", &num);

        if(aux > maior)
        {
            maior = aux;
        }
        
    }
    loop(num, aux, maior);
}
    
int main()
{
    int num;
    scanf("%d", &num);

    loop(num, 0, 0);
    
    return 0;
}