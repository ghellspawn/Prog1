#include <stdio.h>

void loop(int n, int i, int cont)
{
    if(cont == n)
    {
        return;
    }
    else
    {
        printf("%d\n", i);
        loop(n, i + 2, cont + 1);  // i + 2 = "leis dos impares"
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    loop(n, 1, 0);

    return 0;
}