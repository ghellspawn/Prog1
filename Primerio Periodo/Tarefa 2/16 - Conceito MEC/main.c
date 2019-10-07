#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int livros, alunos;
    double razao;
    scanf("%d%d", &livros, &alunos);
    razao = livros/(float)alunos;

    if(razao>=(1/8.0))
    {
        printf("A\n");
    }

    else if(razao<=(1/9.0) && razao>=(1/12.0))
    {
        printf("B\n");
    }

    else if(razao<=(1/13.0) && razao>=(1/18.0))
    {
        printf("C\n");
    }

    else if(razao<(1/18.0))
    {
        printf("D\n");
    }
	return 0;
}