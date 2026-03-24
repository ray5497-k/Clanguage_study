#include <stdio.h>

int main()
{
    int i,n,j = 0;

    scanf("%d" ,&n);

    if(n >= 1 && n<=100)
    {
        for(i = 0 ; i < n ; i ++)
        {
            for( j = 0 ; j <= i ; j++)
            {printf("*");}
            printf("\n");
        }
    }
}