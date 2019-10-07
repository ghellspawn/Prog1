#include <stdio.h>

int main()
{
    int nota1, nota2, nota3;
    double media;
    scanf("%d %d %d", &nota1, &nota2, &nota3);
    media = (nota1 + nota2 + nota3) / 3.0;

    if(media>=70 && media<=100)
    {
        printf("A media do aluno foi %.2lf e ele foi APROVADO\n", media);
    }
    else if(media>=0 && media<40)
    {
        printf("A media do aluno foi %.2lf e ele foi REPROVADO\n", media);
    }
    else if(media>=40 && media<70)
    {
        printf("A media do aluno foi %.2lf e ele foi FINAL\n", media);
    }
    else if(media<0)
    {
        printf("Media invalida\n");
    }

    return 0;
}