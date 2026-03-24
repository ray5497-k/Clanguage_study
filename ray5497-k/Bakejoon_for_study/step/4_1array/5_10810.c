#include <stdio.h>

int main()
{
    int n , m , i, j ,k, l;

    scanf("%d %d", &n ,&m);

    int arr[n];

    for(l = 0 ; l < n ; l++)
    {
        arr[l] = 0;
    }
    for(l = 0 ; l < m ; l++)
    {
        scanf("%d %d %d", &i , &j ,&k);
        
        for(int l = i - 1; l <= j-1 ; l++)
        {
            arr[l] = k;
        }
        
    }
    for(l = 0 ; l < n ; l ++)
    {
        printf("%d ", arr[l]);

    }
    printf("\n");
    return 0 ;
}