#include <stdio.h>

void loop(int cont, double pn, double pb, int i)
{
    if(cont == 5)
    {
        printf("%d\n", i);
        return;
    }
    else
    {
        scanf("%lf %lf", &pn, &pb);
        cont++;

        if((pb/pn) <= 0.8)
        {
            i++;
        }   
    }
    
    loop(cont, pn, pb, i);
}

int main()
{
    
    loop(0, 0, 0, 0);
    
    return 0;
}