#include <stdio.h>

int primo(int n, int aux)
{
    if(aux==n)
    {
        return 1;
    }

    else if(n%aux != 0)
    {
        return primo(n, aux + 1);
    }
    else
    {
        return 1 + primo(n, aux + 1);
    }


}

void val()
{
    int n;
    scanf("%d", &n);

    if(n == -1) 
    {
        return;
    }
    else
    {
        if(n == 0)
        {
            printf("0\n");
        }
        else if(primo(n, 1) == 2)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
            
        }

        val();
    }
}

int main()
{
    val();

    return 0;
}