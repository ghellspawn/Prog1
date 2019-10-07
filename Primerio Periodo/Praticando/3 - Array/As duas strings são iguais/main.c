#include <stdio.h>
#include <string.h>

int percorrer(char string1[], char string2[], int cont, int size)
{
    if(cont == size)
    {
        return 1;
    }
    if(string1[cont] != string2[cont])
    {
        return -1;
    }

    return percorrer(string1, string2, cont + 1, size);
}

int main()
{
    char string1[51], string2[51];
    scanf("%[^\n]", string1);
    scanf(" %[^\n]", string2);
    int size1 = strlen(string1);
    int size2 = strlen(string2);

    if(size1 != size2)
    {
        printf("DIFERENTES\n");
    }
    else
    {
        int ver = percorrer(string1, string2, 0, size1);

        if(ver == 1)
        {
            printf("IGUAIS\n");
        }
        else
        {
            printf("DIFERENTES\n");
        }
        
    }
    
    return 0;
}