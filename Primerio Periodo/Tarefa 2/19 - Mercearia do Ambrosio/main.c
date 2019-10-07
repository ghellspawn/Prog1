#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int cod, quant;
    double vpago, pagodesc, desc;
    scanf("%d%d", &cod, &quant);

    if(cod==1)
    {
        vpago = 5.30 * quant;
    }

    else if(cod==2)
    {
        vpago = 6 * quant;
    }

    else if(cod==3)
    {
        vpago = 3.20 * quant;
    }

    else if(cod==4)
    {
        vpago = 2.50 * quant;
    }

    desc = vpago*0.85;

    if((cod==1 && quant>=15) || (cod==1 && vpago >=40))
    {
        printf("R$ %.2lf\n", desc);
    }

    else if((cod==2 && quant>=15) || (cod==2 && vpago >=40))
    {
        printf("R$ %.2lf\n", desc);
    }

    else if((cod==3 && quant>=15) || (cod ==3 && vpago >=40))
    {
        printf("R$ %.2lf\n", desc);
    }

    else if((cod==4 && quant>=15) || (cod==4 && vpago >=40))
    {
        printf("R$ %.2lf\n", desc);
    }
    
    else
    {
        printf("R$ %.2lf\n", vpago);
    }
    
	return 0;
}