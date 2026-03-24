//10871
#include <stdio.h>

int main()
{
    int x, n ,i;


    while (scanf("%d %d", &n, &x)== 2)
    {
        if(n >= 1 && n <= 10000 && x >= 1 && x <= 10000)
        {
            int a[n];

            for(i = 0 ; i < n ; i++)
            {
                scanf("%d", &a[i]);
            }
            
            for(i= 0 ; i < n ; i++)
            {
                if (a[i] < x)
                {
                    printf("%d ", a[i]);
                }
            }
        }
         break;
    }
   
}