#include <stdio.h>

int main()
{
    int i, j,f;
    char s[100];
    scanf("%s", s);
    char a[100]= "abcdefghijklmnopqrstuvwxyz" ;

    for(i= 0; i < 26  ; i++)
    {
      a[i] = a[i] - 'a' ;
        f = 0;
          for (j =  0 ; s[j] != '\0' ; j ++)
            { 
                if(s[j] - 'a' == a[i])
                {
                    printf("%d", j);
                    f = 1;
                    break;
                }
                else
                {
                    f = 0 ;
                }
            }
        if(f == 0 )
        {
            printf("-1");
        }    

        printf(" ");
    }


}
