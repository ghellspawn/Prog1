#include <stdio.h>

int main()
{
    int f, i, cont = 0;
    scanf("%d%d", &f, &i);
    
    //f - altura, i - idade.
    //Barca Viking: 1,5m de altura e 12 anos.
    //Elevator of Death: 1,4m de altura e 14 anos.
    //Final Killer: 1,7m de altura ou 16 anos.
    
    if(f >= 150 && i >= 12) 
    {
        cont ++;
    }
    
    if(f >= 140 && i >= 14) 
    {
        cont ++;
    }
    
    if(f >= 170 || i >= 16) 
    {
        cont ++;
    }
    
    printf("%d", cont);

    return 0;
}