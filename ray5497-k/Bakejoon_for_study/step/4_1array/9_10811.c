#include <stdio.h>

int main()
{
    int n, m , i, j ,k, l;
    

    scanf("%d %d", &n, &m);

    int arr[n];
    int temp;
    for( i = 0 ; i < n ; i++)
    {
        arr[i] = i + 1;
    }

    for(k = 0 ; k < m ; k++)
    {
        scanf("%d %d", &i ,&j);

        i = i -1 ;
        j = j -1 ;
      while (i < j)
        {
            temp   = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            
            i++;
            j--;
        }
    }

    for(i = 0 ; i < n ; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

}