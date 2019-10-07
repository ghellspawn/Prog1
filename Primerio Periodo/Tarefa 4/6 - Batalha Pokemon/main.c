#include <stdio.h>

int batalha(int v1, int v2, int d1, int d2)
{
    if(v1 <= 0)
    {
        printf("Bezaliel\n");
        return 0;
    }

    if(v2/d1 <= v1/d2)
    {
        printf("Clodes\n");
        return 0;
    }

    batalha(v1 - d2, v2, d1 + 50, d2);
}


void loop(int n, int i)
{
    int v1, v2, d1, d2;
    
    if(i == n)
    {
        return;
    }
    else
    {
        scanf("%d%d%d%d", &v1, &v2, &d1, &d2); 
        batalha(v1, v2, d1, d2);
        loop(n, i+1);  
    }
    
}

int main()
{
    //  Bezaliel -> sempre ataca
    //  Clodes -> usar o poder de aumentar 50 de ataque
    int n;
    scanf("%d", &n);
    loop(n, 0);
    
    return 0;
}