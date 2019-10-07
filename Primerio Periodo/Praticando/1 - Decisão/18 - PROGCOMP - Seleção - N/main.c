#include <stdio.h>

int main()
{
    int idade;
    scanf("%d", &idade);

    if(idade>= 0 && idade <= 10)
    {
        printf("infantil\n");
    }

    else if(idade >=11 && idade <=14)
    {
        printf("junior\n");
    }

    else if(idade >=15 && idade <=20)
    {
        printf("adolescente\n");
    }
    
    else if(idade >=21 && idade <=35)
    {
        printf("jovem\n");
    }

    else if(idade >=35) 
    {
        printf("master\n");
    }
    
    return 0;
}