#include <stdio.h>

void call(int n, int resto)
{
    if(n == 0)
    {
        printf("%d\n", resto);
        return;
    }
    else
    {
        resto += n%10;
        call(n/10, resto);
    }
    
}

int main()
{
    int n;
    scanf("%d", &n);

    call(n, 0);
    return 0;
}