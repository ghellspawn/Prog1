#include <stdio.h>

void loop(int n)
{
    if(n < 0)
    {
        return;
    }
    else
    {
        scanf("%d", &n);
        printf("%d\n", n);
    }
    
    loop(n);
}

int main()
{
    loop(0);

    return 0;
}