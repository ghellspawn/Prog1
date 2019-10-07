#include <stdio.h>

int loop(int n1, int n2, int cont)
{
    if(cont == 50)
    {
        if(cont%n1 == 0 && cont&n2 == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
    }
    else
    {
        if(cont%n1 == 0 && cont%n2 == 0)
        {
            return 1 + loop(n1, n2, cont + 1);
        }
        else
        {
            return 0 + loop(n1, n2, cont + 1);
        }
        
    }
    
}

int main()
{
    int n1, n2;
    scanf("%d%d", &n1, &n2);

    int quantd = loop(n1, n2, 1);
    printf("%d\n", quantd);
    
    return 0;
}