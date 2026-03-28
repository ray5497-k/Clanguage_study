#include <stdio.h>

int main()
{
    int chess[6]={1,1,2,2,2,8};
    int now[6];
    int result[6];

    int i,j;

    for(i=0 ; i < 6 ; i ++)
    {
        scanf("%d", &now[i]);
    }
    
     for(i=0 ; i < 6 ; i ++)
    {
       result[i] = chess[i] - now[i];
       printf("%d ",result[i]);
    }
}