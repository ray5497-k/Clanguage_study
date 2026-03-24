#include <stdio.h>

int main()
{
    int i,n,j,l;

    scanf("%d" ,&n);

    if(n >= 1 && n<=100)
    {
      for(i = n ; i > 0 ; i--)
      {
        for(j = 0 ;j < i-1 ; j ++)
        {
            printf(" ");
        }
      for(l = 1; l + j < n + 1; l++ )
        {
          printf("*");
        }
        printf("\n");
      }
    }
}