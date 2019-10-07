#include <stdio.h>

typedef struct pessoa
{
    char name[50], sexo, eCivil;
    int idade, nAmigos, nFotos;
} person;

void read(int x, person p[], int i)
{

    for(i = 0 ; i < x ; i++) //leitura da struct
    {
        scanf("%d", &p[i].idade);
        scanf(" %[^\n]s", p[i].name);
        scanf(" %c", &p[i].sexo);
        scanf(" %c", &p[i].eCivil);
        scanf("%d", &p[i].nAmigos);
        scanf("%d", &p[i].nFotos);
    }

    return;
}

void show(int x, person p[], int i)
{
    for(i = 0 ; i < x ; i++) //print da struct
    {
        printf("Idade: %d\n", p[i].idade);
        printf("Nome: %s\n", p[i].name);
        printf("Sexo: %c\n", p[i].sexo);
        printf("Estado Civil: %c\n", p[i].eCivil);
        printf("Numero de amigos: %d\n", p[i].nAmigos);
        printf("Numero de fotos: %d\n", p[i].nFotos);

        printf("\n");
    }

    return;
}

int main()
{
    int x;
    scanf("%d", &x);
    person p[x];

    read(x, p, 0);
    show(x, p, 0);
    
    return 0;
}