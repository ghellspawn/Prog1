#include <stdio.h>

int mdc(int num1,int num2)
{
    int resto;
    resto = num1 % num2;
    num1 = num2;
    num2 = resto;

    if(resto == 0)
    {
        return num1;
    }

    else
    {
        return mdc(num1, num2);
    }
}

int main()
{
    int num1, num2, resto;
    scanf("%d%d", &num1, &num2);
    resto = mdc(num1, num2);
    printf("%d", resto);
    return 0;
}