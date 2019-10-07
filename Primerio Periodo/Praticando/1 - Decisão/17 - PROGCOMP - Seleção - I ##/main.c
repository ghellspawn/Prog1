#include <stdio.h>

int main()
{
    int n1, n2, n3;
    scanf("%d%d%d", &n1, &n2, &n3);

    if(n1 < n2+ n3 && n2 < n1 + n3 && n3 < n1 + n2 && n1==n2 && n2==n3 && n1==n3)
    {
        printf("podem formar um triangulo\n");
        printf("equilatero\n");
    }

    else if(n1 < n2+ n3 && n2 < n1 + n3 && n3 < n1 + n2 && n1!=n2 && n1!=n3 && n2!=n3)
    {
        printf("podem formar um triangulo\n");
        printf("escaleno\n");
    }

    else if(n1 < n2+ n3 && n2 < n1 + n3 && n3 < n1 + n2 && n1==n2 || n2==n3 || n1==n3)
    {
        printf("podem formar um triangulo\n");
        printf("isosceles\n");
    }

    else
    {
       printf("nao podem formar um triangulo\n"); 
    }
    
    return 0;
}