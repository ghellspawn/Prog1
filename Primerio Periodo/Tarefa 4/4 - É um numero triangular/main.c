#include <stdio.h>

void triang(int n, int t )
{
    if(n == 0)
    {
        printf("Falso\n");
        return;
    }
    if(t * (t + 1) * (t + 2) == n) 
    {
        printf("%d * %d * %d = %d\nVerdadeiro", t, t+1, t+2, n);
        return;
    } 
    else if(t * (t + 1) * (t + 2) < n)
    {
        triang(n, t+ 1);
    }
    else
    {
        printf("Falso\n");
        return;
    }
    
    
}

int main()
{
    int n, t;
    scanf("%d", &n);

    triang(n, 0);

    return 0;
}