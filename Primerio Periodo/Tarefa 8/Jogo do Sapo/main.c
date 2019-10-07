#include <stdio.h>

void play(int o, int m, int player[], int chess[], int x, int j, int n)
{
    player[j] += x;

    if(player[j] >= n)
    {
        player[j] %= n;
    }
    if(player[j] < 0)
    {
        player[j] = (player[j] % n) + n;
    }

    player[j] += chess[player[j]];

    if(player[j] >= n)
    {
        player[j] %= n;
    }
    if(player[j] < 0)
    {
        player[j] = (player[j] % n) + n;
    }
}

void read(int o, int m, int player[], int chess[], int n)
{
    int i, j;

    for(i = 0; i < o; i++)
    {
        for(j = 0; j < m; j++)
        {
            int x;

            scanf("%d", &x);

            play(o, m, player, chess, x, j, n);
        }
    }
}

int main()
{
    int n, m, o;
    scanf("%d %d %d", &n, &m, &o);

    int chess[n], player[m];

    int i;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &chess[i]);
    }

    for(i = 0; i < m; i++)
    {
        player[i] = 0;
    }

    read(o, m, player, chess, n);

    for(i = 0; i < m; i++)
    {
        printf("%d\n", player[i]);
    }
}