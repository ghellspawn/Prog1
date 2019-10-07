#include <stdio.h>

void readVader(int n, int m, int mVader[][m], int i, int j)
{
    if(j == m)
    {
        i += 1;
        j = 0;
    }
    if(i == n)
    {
        return;
    }
 
    scanf("%d", &mVader[i][j]);
    readVader(n, m, mVader, i, j + 1);
}

void readLuke(int n, int m, int mLuke[][m], int i, int j)
{
    if(j == m)
    {
        i += 1;
        j = 0;
    }
    if(i == n)
    {
        return;
    }
 
    scanf("%d", &mLuke[i][j]);
    readLuke(n, m, mLuke, i, j + 1);
}

int main()
{
    int vLuke, vVader;
    scanf("%d %d", &vLuke, &vVader);
    
    int n = 3, m = 3;
    int mLuke[n][m], mVader[n][m];

    readLuke(n, m, mLuke, 0, 0);
    readVader(n, m, mVader, 0, 0);

    return 0;
}