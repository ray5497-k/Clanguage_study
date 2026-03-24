#include <stdio.h>

int main()
{
    int t,i;
    int c = 1;
    scanf("%d",&t);
    int a[t];
    int b[t];
    int sum[t];

    for(i = 0 ; i < t ; i++)
    {
        scanf("%d %d",&a[i],&b[i]);
        if(a[i] > 0 && b[i] < 10 )
        {
            sum[i] = a[i] + b[i];
        }
    }
   for(i =0 ; i < t ; i++)
   {
    printf("Case #%d: %d + %d = %d\n",c,a[i],b[i],sum[i]);
    c = c + 1;
   }
}