#include <stdio.h>

int main()
{
    int n[30] = {0};
    int x, i, j;
    int k = 0 ;
    int f[2];
    int min, max;
    for(i = 0 ; i < 28 ; i++)
    {
        scanf("%d", &x);
        n[x-1] = 1;
    }
    for(i = 0 ; i < 30 ; i++)
    {
        if(n[i] != 1)
        {
            f[k] = i+1 ;
            k = k + 1;
        }
    }
    min = f[0];
    max = f[1];
    if ((min - f[1]) > 0 )
    {
        min = f[1];
        max = f[0];
    }
    printf("%d\n%d\n", min, max);
    return 0 ;
}