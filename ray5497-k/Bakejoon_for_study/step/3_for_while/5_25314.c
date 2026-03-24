#include <stdio.h>

int main()
{
    int n, x = 0 , i ;
scanf("%d", &n);

if (n >= 4 && 1000 >= n
    && n%4 == 0)
    {
        for(i = 0 ; i < n/4 ; i++)
        {
            printf("long ");
        }
        printf("int\n");
    }


}