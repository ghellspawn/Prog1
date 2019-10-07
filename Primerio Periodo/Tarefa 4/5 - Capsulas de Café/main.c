#include <stdio.h>
#include <ctype.h>

void loop(int cx_p, int cx_g, int i)
{
    if(i==7)
    {   
        int caps = cx_p*10+cx_g*16;
        printf("\n%d\n%d\n", caps, (caps*2)/7);
        return;
    }
    else
    {
        int qtd_caixas;
        char tamanho;
        scanf("%d %c ", &qtd_caixas, &tamanho);
        
        tamanho = tolower(tamanho);
        if(tamanho =='p')
        {
            cx_p += qtd_caixas;
        }
        else if(tamanho =='g')
        {
            cx_g += qtd_caixas;
        }

       loop(cx_p, cx_g, i+1);
    }

}

int main()
{   
    loop(0, 0, 0);
    
    //cápsulas:
        //caixas pequenas (10 unidades) 
        //grandes (16 unidades)

    //quantas xícaras cada professor poderá beber:
        //(quantidade de capsulas doadas X 2) ÷ 7 
    
    return 0;
}