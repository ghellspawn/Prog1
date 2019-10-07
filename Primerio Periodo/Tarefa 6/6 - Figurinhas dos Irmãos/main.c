#include <stdio.h>

int percorrer(int array[], int n, int cont, int fig)
{
    if(cont == n)
    {
        return 1;
    }
    if(array[cont] == fig)
    {
        return -1;
    }

    percorrer(array, n, cont + 1, fig);
}

void loop(int joao[], int maria[], int n, int count, int j, int m, int jcont, int mcont, int cj, int cm)
{
    if(count == n)
    {
        printf("%d\n%d\n", jcont, mcont);

        if(cj > cm)
        {
            printf("%d\n", cj);
        }
        else
        {
            printf("%d\n", cm);
        }
        
        return;
    }
    else
    {
        int fig;
        scanf("%d", &fig);
        if(fig%2 == 0)
        {
            int res = percorrer(joao, j, 0, fig);
            if(res == 1)
            {
                cj += fig;
                joao[j] = fig;
                j++;
            }
            jcont++;
        }
        else
        {
            int res = percorrer(maria, m, 0, fig);
            if(res == 1)
            {
                cm += fig;
                maria[m] = fig;
                m++;
            }
            mcont++;
        }
       
       loop(joao, maria, n, count + 1, j, m, jcont, mcont, cj, cm); 
    }
    
}

int main()
{
    int n;
    scanf("%d", &n);
    int joao[n], maria[n];

    loop(joao, maria, n, 0, 0, 0, 0, 0, 0, 0);

    return 0;
}

// joão -> par
// maria -> impar