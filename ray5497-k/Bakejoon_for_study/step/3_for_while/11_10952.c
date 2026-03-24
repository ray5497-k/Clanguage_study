#include <stdio.h>

int main()
{
    int a,b;
    int sum;

    while(1)
    {
        scanf ("%d %d", &a,&b);

         if(0<a && b <10)
         {
            sum = a + b;
            printf("%d\n",sum);
         }
         else
         {
            break ;
         }
    }
}