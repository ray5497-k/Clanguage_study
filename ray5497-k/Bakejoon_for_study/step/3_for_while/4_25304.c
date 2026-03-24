#include <stdio.h>

int main()
{
 int x, n , a , b, i;
 int t = 0 ;

 scanf("%d %d", &x ,&n);
 
 for (i = 0 ; i < n ; i++)
 {
    scanf("%d %d",&a,&b);

    t = t +(a * b);
 }
  if (1 <= x && x <= 1000000000 &&
    n <= 100 && 1 <= n && 1 <= a&& a <= 1000000 &&
    1<= b&& b<= 10 && x == t)
    {
        printf("Yes \n");
    }
  else if(1 <= x && x <= 1000000000 &&
    n <= 100 && 1 <= n && 1 <= a&& a <= 1000000 && 
    1 <= b && b<= 10 && x != t)
    {
        printf("No\n");
    }
    return 0;
}