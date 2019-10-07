#include <stdio.h>

int main()
{
    int idade, segundos;
    scanf("%d", &idade);
    segundos = idade * 31536000;
    printf("%d", segundos);

    return 0;
}
