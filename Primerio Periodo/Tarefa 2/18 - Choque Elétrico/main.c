#include <stdio.h>

int main()
{
    int level, form;
    scanf("%d", &level);

    if(level>=1 && level<=20)
    {
        form = 20 + (level)*(level)*(level);
        printf("Potencia de : %d W\n", form);
    }

    else if(level>=21 && level<=40)
    {
        form = 8000 + (level-10)*(level-10);
        printf("Potencia de : %d W\n", form);
    }

    else if(level>=41 && level<=60)
    {
        form = 9000 + (5*level);
        printf("Potencia de : %d W\n", form);
    }

    else if(level>=61 && level <=80)
    {
        form = 9300 + (2*level);
        printf("Potencia de : %d W\n", form);
    }

    else if(level>=81 && level<=100)
    {
        form = 9500 + level;
        printf("Potencia de : %d W\n", form);
    }

    return 0;
}