#include <stdio.h>

void number2(int n2, int i)
{
    if(i == n2)
    {
        printf("%d\n", i);
        return;
    }
    else
    {
        printf("%d ", i);
        number2(n2, i + 1);
    }
    
}

void number1(int n1, int i)
{
    if(i == n1)
    {
        printf("%d\n", i);
        return;
    }
    else
    {
        printf("%d ", i);
        number1(n1, i + 1);
    }
    
}

int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    number1(n1, 1);
    number2(n2, n1 + 1);
    
    return 0;
}