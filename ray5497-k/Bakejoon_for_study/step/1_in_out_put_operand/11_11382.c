#include <stdio.h>

int main()
{
  long long A,B,C ;

  scanf("%lld %lld %lld", &A,&B,&C);

if (A >= 1 && A <= 1000000000000LL &&
    B >= 1 && B <= 1000000000000LL &&
    C >= 1 && C <= 1000000000000LL)
  {
    printf("%lld\n", A+B+C);
  }
return 0;
}