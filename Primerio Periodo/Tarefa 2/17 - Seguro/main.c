#include <stdio.h>

int main()
{
    int homem, idade;
    scanf("%d%d", &homem, &idade);

    if(idade==1 && homem==0)
    {
        printf("1\n");
    }

    else
    {
        printf("0\n");
    }

    return 0;
}