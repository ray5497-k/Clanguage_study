#include <stdio.h>

int main()
{
    int a,b;
    int sum;

    while(scanf("%d %d", &a,&b)== 2)
    {
        if(a > 0 && b < 10)
        {
            sum = a +b;
            printf("%d\n",sum);
        }
    }
}