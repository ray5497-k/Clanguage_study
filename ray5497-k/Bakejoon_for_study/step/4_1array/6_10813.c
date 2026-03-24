#include <stdio.h>

int main()
{
 int n , m, i , j, l ;

 scanf("%d %d", &n,&m);
    int arr[n];

 for(l = 0 ; l < n ; l++)
 {
    arr[l] = l + 1;
 }

 for(l = 0 ; l < m ; l++)
 {
    scanf("%d %d", &i ,&j);

    int temp;
    temp = arr[i-1];
    arr[i-1] = arr[j-1];
    arr[j-1] = temp;
 }
 for(l = 0 ; l < n ; l++)
 {
    printf("%d ", arr[l]);
 }

 printf("\n");
 return 0;

}