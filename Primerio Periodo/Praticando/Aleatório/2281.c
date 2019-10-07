#include <stdio.h>

void compare(int n, int i)
{
    if(n/10 == 0)
    {   
        printf("%d\n", ++i);
        return;
    }
    else
    {
        compare(n/10, i + 1);
    }
    
}

int main()
{
    int n;
    scanf("%d", &n);

    compare(n, 0);

    return 0;
}