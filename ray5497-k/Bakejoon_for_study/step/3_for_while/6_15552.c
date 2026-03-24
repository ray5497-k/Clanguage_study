#include <stdio.h>

int main()
{
    int t,a,b;
    int i;


    scanf("%d", &t);

    int sum[t];

    for(i = 0 ; i < t ; i++)
    {
        scanf("%d %d",&a,&b);
        sum[i] = a+b;
    }
    for(i = 0 ; i < t ; i++)
    {
        printf("%d\n",sum[i]);
    }
}