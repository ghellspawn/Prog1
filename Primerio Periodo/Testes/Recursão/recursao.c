#include <stdio.h>

void crescente(int n) 
{
    if(n == 0) 
    {
        printf("%d\n", n);
        return;
    }
    else 
    {
        printf("%d ", n);
        crescente(n - 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    crescente(n);
    printf("\n");

    return 0;
}