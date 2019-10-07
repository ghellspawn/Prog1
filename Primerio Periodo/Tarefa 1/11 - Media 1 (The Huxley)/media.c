#include <stdio.h>

int main()
{
    double n1, n2, p1, p2, MEDIA;
    p1 = 3.5;
    p2 = 7.5;
    scanf("%lf %lf", &n1, &n2);
    MEDIA = (n1*p1 + n2*p2) / 11.0;
    printf("Media = %.5lf", MEDIA);

    return 0;

}