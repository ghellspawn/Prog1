#include <stdio.h>

int main()
{
    double a, b, c, p1 = 2, p2 = 3, p3 = 5, media;
    scanf("%lf %lf %lf", &a, &b, &c);
    media = (a*p1 + b*p2 + c*p3)/10;
    printf("MEDIA = %.1lf", media);

    return 0;
}