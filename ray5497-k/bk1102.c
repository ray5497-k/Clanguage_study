#include<stdio.h>
#include<stdlib.h>

int main()
{
    int T , x;
    int*A;
    int*B;
    scanf("%d",&T);
    A = (int*)malloc(sizeof(int)*T);
    B = (int*)malloc(sizeof(int)*T);
    
    
    for(x = 0 ; x < T ; x++)
    {
        scanf("%d %d", &A[x], &B[x]);
    }
    for(x = 0 ; x < T ; x++)
    {
        printf("Case #%d: %d + %d = %d\n", x+1 ,A[x],B[x],A[x]+B[x]);
    }
}