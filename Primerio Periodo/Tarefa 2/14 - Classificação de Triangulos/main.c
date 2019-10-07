#include <stdio.h>

int main()
{
    double ladoa, ladob, ladoc;
    scanf("%lf%lf%lf", &ladoa, &ladob, &ladoc);

    if(ladoa==ladob && ladoa==ladoc && ladob==ladoc)
    {
        printf("equilatero\n");
    }

    else if(ladoa!=ladob && ladoa!=ladoc && ladob!=ladoc)
    {
        printf("escaleno\n");
    }

    else if(ladoa==ladob || ladob==ladoc || ladoa==ladoc)
    {
        printf("isosceles\n");
    }

    return 0;
}