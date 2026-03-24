#include <stdio.h>

int main()
{
    int n , i ;
    int t = 0;

    scanf("%d",  &n);

    if (n>=1 && n <=10000)
    {
        for (i = 0 ; i < n+1 ; i++)
        {
           t =  t + i;
        }

        printf("%d\n", t);
    }
    return 0 ;
}