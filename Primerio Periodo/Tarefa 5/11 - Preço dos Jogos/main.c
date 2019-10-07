#include <stdio.h>

void leitura(int n, int dif, double preco, int i, double calc1, double calc2, double calc3, int j)
{
    if(i == n)
    {
        return;
    }
    else
    {
        scanf("%d %lf", &dif, &preco);

        if(dif == 0)
        {
            if(preco <= 100)
            {
                calc1 = (preco * 0.875);
                calc2 = (calc1 * 0.875);
                calc3 = (calc2 * 0.875);

                if(preco < 45)
                {
                    printf("Jogo[%d] = R$%.2lf\n", j, preco);
                }
                else if(calc3 < 45)
                {
                    printf("Jogo[%d] = R$45.00\n", j);
                }
                else
                {
                    printf("Jogo[%d] = R$%.2lf\n", j, calc3);
                }
            }
            else
            {
                calc1 = (preco * 0.75);
                calc2 = (calc1 * 0.75);
                calc3 = (calc2 * 0.75);

                if(preco < 45)
                {
                    printf("Jogo[%d] = R$%.2lf\n", j, preco);
                }
                else if(calc3 < 45)
                {
                    printf("Jogo[%d] = R$45.00\n", j);
                }
                else
                {
                    printf("Jogo[%d] = R$%.2lf\n", j, calc3);
                }
            } 
        }
        
        else if(dif == 1)
        {
            if(preco <= 100)
            {
                calc1 = (preco * 0.9);
                calc2 = (calc1 * 0.9);
                calc3 = (calc2 * 0.9);

                if(preco < 45)
                {
                    printf("Jogo[%d] = R$%.2lf\n", j, preco);
                }
                else if(calc3 < 45)
                {
                    printf("Jogo[%d] = R$45.00\n", j);
                }
                else
                {
                    printf("Jogo[%d] = R$%.2lf\n", j, calc3);
                }
            }
            else
            {
                calc1 = (preco * 0.8);
                calc2 = (calc1 * 0.8);
                calc3 = (calc2 * 0.8);

                if(preco < 45)
                {
                    printf("Jogo[%d] = R$%.2lf\n", j, preco);
                }
                else if(calc3 < 45)
                {
                    printf("Jogo[%d] = R$45.00\n", j);
                }
                else
                {
                    printf("Jogo[%d] = R$%.2lf\n", j, calc3);
                }
            } 
        }
        
        else if(dif == 2)
        {
            if(preco <= 100)
            {
                calc1 = (preco * 0.91);
                calc2 = (calc1 * 0.91);
                calc3 = (calc2 * 0.91);

                if(preco < 45)
                {
                    printf("Jogo[%d] = R$%.2lf\n", j, preco);
                }
                else if(calc3 < 45)
                {
                    printf("Jogo[%d] = R$45.00\n", j);
                }
                else
                {
                    printf("Jogo[%d] = R$%.2lf\n", j, calc3);
                }
            }
            else
            {
                calc1 = (preco * 0.82);
                calc2 = (calc1 * 0.82);
                calc3 = (calc2 * 0.82);

                if(preco < 45)
                {
                    printf("Jogo[%d] = R$%.2lf\n", j, preco);
                }
                else if(calc3 < 45)
                {
                    printf("Jogo[%d] = R$45.00\n", j);
                }
                else
                {
                    printf("Jogo[%d] = R$%.2lf\n", j, calc3);
                }
            } 
        }
        
        else if(dif == 3)
        {
            if(preco <= 100)
            {
                calc1 = (preco * 0.925);
                calc2 = (calc1 * 0.925);
                calc3 = (calc2 * 0.925);

                if(preco < 45)
                {
                    printf("Jogo[%d] = R$%.2lf\n", j, preco);
                }
                else if(calc3 < 45)
                {
                    printf("Jogo[%d] = R$45.00\n", j);
                }
                else
                {
                    printf("Jogo[%d] = R$%.2lf\n", j, calc3);
                }
            }
            else
            {
                calc1 = (preco * 0.85);
                calc2 = (calc1 * 0.85);
                calc3 = (calc2 * 0.85);

                if(preco < 45)
                {
                    printf("Jogo[%d] = R$%.2lf\n", j, preco);
                }
                else if(calc3 < 45)
                {
                    printf("Jogo[%d] = R$45.00\n", j);
                }
                else
                {
                    printf("Jogo[%d] = R$%.2lf\n", j, calc3);
                }
            }   
        }
        
        else if(dif == 4)
        {
            if(preco <= 100)
            {
                calc1 = (preco * 0.94);
                calc2 = (calc1 * 0.94);
                calc3 = (calc2 * 0.94);

                if(preco < 45)
                {
                    printf("Jogo[%d] = R$%.2lf\n", j, preco);
                }
                else if(calc3 < 45)
                {
                    printf("Jogo[%d] = R$45.00\n", j);
                }
                else
                {
                    printf("Jogo[%d] = R$%.2lf\n", j, calc3);
                }
            }
            else
            {
                calc1 = (preco * 0.88);
                calc2 = (calc1 * 0.88);
                calc3 = (calc2 * 0.88);

                if(preco < 45)
                {
                    printf("Jogo[%d] = R$%.2lf\n", j, preco);
                }
                else if(calc3 < 45)
                {
                    printf("Jogo[%d] = R$45.00\n", j);
                }
                else
                {
                    printf("Jogo[%d] = R$%.2lf\n", j, calc3);
                }
            }   
        }
        
        else if(dif == 5)
        {
            if(preco <= 100)
            {
                calc1 = (preco * 0.95);
                calc2 = (calc1 * 0.95);
                calc3 = (calc2 * 0.95);

                if(preco < 45)
                {
                    printf("Jogo[%d] = R$%.2lf\n", j, preco);
                }
                else if(calc3 < 45)
                {
                    printf("Jogo[%d] = R$45.00\n", j);
                }
                else
                {
                    printf("Jogo[%d] = R$%.2lf\n", j, calc3);
                }
            }
            else
            {
                calc1 = (preco * 0.9);
                calc2 = (calc1 * 0.9);
                calc3 = (calc2 * 0.9);

                if(preco < 45)
                {
                    printf("Jogo[%d] = R$%.2lf\n", j, preco);
                }
                else if(calc3 < 45)
                {
                    printf("Jogo[%d] = R$45.00\n", j);
                }
                else
                {
                    printf("Jogo[%d] = R$%.2lf\n", j, calc3);
                }
            } 
        }

        leitura(n, dif, preco, i + 1, 0, 0, 0, j + 1);
    }
    
}

int main()
{
   int n;
   scanf("%d", &n);

   leitura(n, 0, 0, 0, 0, 0, 0, 0);
   
   return 0;
}