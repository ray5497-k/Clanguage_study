#include <stdio.h>

int main()
{
    int n[10];
    int c = 0 , i, j ;
    int on[10];
    int dp = 0 ;
    for(i= 0 ; i < 10 ; i++)
    {
        scanf("%d", &n[i]);

        on[i] = n[i] % 42;

    }
    for(i = 0 ; i < 10 ; i++)
    {
        for(j = 0 ; j < 10 ; j++)
        {
           if(on[i] == on[j])
            { 
                if(i == j)
                {
                    dp = 0;
                }
                else
                {
                    dp = 1;
                } 
            }
        }
         if(dp == 0)
         {
            c = c + 1;
         } 
    }
    if(c == 0 )
    {
        c = 1;
    }

    printf("%d\n",c);

    return 0;
}