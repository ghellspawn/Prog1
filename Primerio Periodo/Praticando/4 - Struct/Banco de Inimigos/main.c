#include <stdio.h>

typedef struct banco
{
    char name[20];
    int id, level, vida, atk, def;
} bank;

void read(int x, bank p[], int i)
{

    for(i = 0 ; i < x ; i++) //leitura da struct
    {
        scanf(" %[^\n]s", p[i].name);
        scanf("%d", &p[i].id);
        scanf("%d", &p[i].level);
        scanf("%d", &p[i].vida);
        scanf("%d", &p[i].atk);
        scanf("%d", &p[i].def);
    }

    return;
}

void show(int x, bank p[], int i)
{
    for(i = 0 ; i < x ; i++) //print da struct
    {
        printf("Nome: %s\n", p[i].name);
        printf("ID: %d\n", p[i].id);
        printf("Level: %d\n", p[i].level);
        printf("Vida: %d\n", p[i].vida);
        printf("Ataque: %d\n", p[i].atk);
        printf("Defesa: %d\n", p[i].def);
    }

    return;
}

int main()
{
    int x;
    scanf("%d", &x);
    bank p[x];

    read(x, p, 0);
    show(x, p, 0);
    
    return 0;
}