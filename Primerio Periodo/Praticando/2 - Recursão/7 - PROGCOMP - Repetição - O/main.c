#include <stdio.h>

int loop(int biggestnumber)
{   
    int n;
    scanf("%d", &n);

    if(n == 0)
    {
        return biggestnumber;
    }
    else
    {
        if(n>biggestnumber)
        {
            loop(n);
        }
        else
        {
            loop(biggestnumber);
        }  
    }  
}

int main()
{
    int print, biggestnumber;
    print = loop(-1);

    printf("%d\n", print);

    return 0;
}