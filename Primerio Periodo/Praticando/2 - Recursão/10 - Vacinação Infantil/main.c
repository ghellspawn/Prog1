#include <stdio.h>

void loop(int ano, int perio, int i, int doses)
{
    if(i == 3)
    {
        return;
    }
    else
    {   
        doses = ano + perio;
        printf("%d ", doses);
        i++; 
    }
    
    loop(doses, perio, i, doses);
}

int main()
{
    int ano, perio;
    scanf("%d%d", &ano, &perio);

    loop(ano, perio, 0, 0);

    return 0;
}