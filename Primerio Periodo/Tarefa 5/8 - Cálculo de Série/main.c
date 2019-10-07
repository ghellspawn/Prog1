#include <stdio.h>

double loop(int n, double s, int i, int np, int dp, int ni, int di)
{
    if(i == n - 1)
    {
        return s;
    }
    else
    {
        if(i%2 == 0)
        {
            s += ((double) np)/dp;

            np *= 4;
            dp += 3;
        }
        else
        {
            s += ((double)ni)/di;

            ni += 2;
            di *= 4;
        }

        return loop(n, s, i+1, np, dp, ni, di);
    }
    
}

int main()
{
    int n;
    double s = 0;
    scanf("%d", &n);

    if(n != 0)
    {
        s = loop(n, 1, 0, 2, 3, 3, 4);
    }

    printf("S: %.2lf\n", s);

    return 0;
}