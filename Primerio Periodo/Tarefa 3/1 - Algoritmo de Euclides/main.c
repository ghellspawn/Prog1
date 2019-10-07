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

void print(int n, int count)
{
    if(n == count)
    {
        return;
    }
        

    int num1, num2, resto;
    scanf("%d%d", &num1, &num2);
    resto = mdc(num1, num2);
   
    printf("MDC(%d,%d) = %d\n", num1, num2, resto);
    print(n, count + 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    print(n, 0);
    return 0;
}