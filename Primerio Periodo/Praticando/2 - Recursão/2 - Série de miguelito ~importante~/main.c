#include <stdio.h>

int op(int n, int arm, int cont)
{
    if(cont == n)
    {
        return arm;
    }
    if(cont%2 != 0)
    {
        arm += 4;
    }
    if(cont%2 == 0)
    {
        arm += 1;
    }
   
   op(n, arm, cont+1);
    
}

int loop()
{
    int n;
    scanf("%d", &n);

    printf("%d\n", op(n, 3, 1));
    
}

int main()
{
    loop();
    
    return 0;
}