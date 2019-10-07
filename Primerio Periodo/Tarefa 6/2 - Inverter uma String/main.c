#include <stdio.h>

int strlenth(char array[], int cont)
{
    if(array[cont] == '\0')
    {
        return cont;
    }

    return strlenth(array, cont + 1);
}

void inverter_array(char array[], int i, int j, char aux)
{
    if(i > j)
    {
        return;
    }

    aux = array[i];
    array[i] = array[j];
    array[j] = aux;
    
    inverter_array(array, i + 1, j - 1, aux);
}

int main()
{
    char array[256];
    scanf("%[^\n]", array);
    int tamanho = strlenth(array, 0);
    
    inverter_array(array, 0, tamanho - 1, ' ');
    printf("%s\n", array);

    return 0;
}


//** \o **
//** [^\n] **