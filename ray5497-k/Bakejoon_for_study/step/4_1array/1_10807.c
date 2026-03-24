//10807
#include <stdio.h>

int main()
{
int n , v ,i, c = 0, j = 0;

scanf("%d", &n) ;
    int arr[n];
        if(n >= 1 && n <= 100)
    {
        for(i = 0; i < n ; i++)
        {
            scanf("%d", &arr[i]);
        }
        scanf("%d", &v);
        
        for(j = 0 ; j < n ; j++)
            {   
                if(arr[j] == v)
                {
                    c = c + 1;
                } 
            }
        printf("%d\n", c);  
    }
}