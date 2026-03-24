#include <stdio.h>

int main()
{
    int n , i , j , l;
    int a, m;
    while(scanf("%d", &n) == 1)
    {
        if( 1 <= n && n <= 100000)
        {
        int arr[n];
        
        for(i = 0 ; i < n ; i ++)
            {
                scanf("%d",&arr[i]);
            }
        a = arr[0];
        m = arr[0];
        for(j = 0 ; j < n ; j++)
            {
                if((a - arr[j]) >= 0 )
                {
                    a = a;
                }
                else if((a - arr[j]) < 0)
                {
                    a = arr[j];
                }
            }
        for(l = 0 ; l < n ; l++)
            {
                if((a - arr[l]) >= 0 )
                {
                    m = arr[l];
                }
                else if((a - arr[l]) < 0)
                {
                    m = a;
                }
            }   
        
        }
        printf("%d %d\n",m , a);
        break ; 
     }
    }