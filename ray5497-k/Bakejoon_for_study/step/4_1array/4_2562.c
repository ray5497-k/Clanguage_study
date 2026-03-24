#include <stdio.h>

int main()
{
    int i, max , max_index;
    int arr[9];
 
    for(i=0 ; i < 9 ; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    max_index = 1;
    for(i = 0 ; i < 9 ; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            max_index = i+1;
        }
    }
    printf("%d\n%d\n",max,max_index);
    return 0;
}