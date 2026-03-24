#include <stdio.h>

int main()
{
    int t,a,b,i;
    int c = 1;
    scanf("%d",&t);
    int sum[t];
    for(i = 0 ; i < t ; i++)
    {
        scanf("%d %d", &a ,&b);
       
        sum[i] = a+b;
    }
    for(i = 0 ; i < t ; i++)
    {
        printf("Case #%d: %d\n", c,sum[i]);
        c = c+1;
    }
}