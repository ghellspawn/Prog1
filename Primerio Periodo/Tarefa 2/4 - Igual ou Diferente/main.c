#include <stdio.h>

int main()
{
    int num1, num2, num3, resultado;
    scanf("%d%d%d", &num1, &num2, &num3);

    if(num1==num2 && num1==num3 && num2==num3)
    {
        printf("1\n");
    }

    else if(num1!=num2 && num1!=num3 && num2!=num3)
    {
        printf("2\n");
    }

    else if(num1==num2 || num2==num3)
    {
        printf("3\n");
    }

    return 0;
}