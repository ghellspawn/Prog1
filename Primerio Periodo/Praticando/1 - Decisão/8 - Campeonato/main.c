#include <stdio.h>

int main()
{
    int cv, ce, cs, fv, fe, fs, resc, resf, vit, emp, gol;
    scanf("%d %d %d %d %d %d", &cv, &ce, &cs, &fv, &fe, &fs);
    vit = 3;
    emp = 1;
    gol = 1;
    resc = (cv*vit) + (ce*emp);
    resf = (fv*vit) + (fe*emp);

    if(resc > resf)
    {
        printf("C\n");
    }

    else if(resf>resc)
    {
        printf("F\n");
    }

    else if(resc==resf)
    {
        if(cs > fs) 
        {
            printf("C\n");
        }
        
        else if(fs>cs)
        {
            printf("F\n");
        }
        
        else 
        {
            printf("=\n");
        }
    }
    
    return 0;
}