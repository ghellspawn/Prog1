#include <stdio.h>

int main()
{
    double a, b, c, media;
    a<=10 && b<=10 && c<=10;
    scanf("%lf%lf%lf", &a, &b, &c);
    media = (a+b+c)/3;

    if(a>media && b<media && c<media|| b>media && a<media && c<media || c>media && a<media && b<media)
    {
        printf("1\n");
    }

    else if(a>media && b>media && c<media || a>media && c>media && b<media|| b>media && c>media && a<media)
    {
        printf("2\n");
    }
    
    else if(a==media && b==media && c==media)
    {
        printf("0\n");
    }

    return 0;
}