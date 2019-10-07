#include <stdio.h>

int main()
{
    int x1, x2;
    scanf("%d%d", &x1, &x2);

    if(x1 > x2)
    {
        printf("%d", x1);
    }

    else if(x2>x1)
    {
        printf("%d", x2);
    }
    
    return 0;
}