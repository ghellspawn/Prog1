#include <stdio.h>

int fat(int num1)
{
    if(num1 <=1)
    {
        return 1;
    }

    else
    {
        return num1 * fat(num1 - 1);
    }

}

int loop()
{
    int num1, fatorial;
    scanf("%d", &num1);
    
    if(num1 == -1)
    {
        return 0;
    }

    else
    {
        fatorial = fat(num1);
        printf("%d\n", fatorial);
        loop();
    }
    
}

int main()
{
    loop();
    return 0;
}