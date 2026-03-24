#include<stdio.h>
#include <string.h>

int main()
{
    int t, r, i ,j, k;
    typedef struct {
       int r;
       char s[1000]; 
    } data;
   
    scanf("%d",&t);
    data sr[t]; //위에서 선언한 구조체 변수 t 개 선언

    for(i=0 ; i < t ; i++)
    { 
        scanf("%d %s",&sr[i].r ,sr[i].s);
         
    }
    for(i=0 ; i < t ; i++)
    {
        for(j = 0 ; j <strlen(sr[i].s); j++)
        {
           for(k = 0 ; k < sr[i].r ; k++)
           {
            printf("%c",sr[i].s[j]);
           } 
        }
        printf("\n");
    }

    
}