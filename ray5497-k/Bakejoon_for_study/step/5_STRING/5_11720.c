#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,total= 0 ,i;
    scanf("%d",&n);

    char str[n+1];
    char *s = str;
    scanf("%s", str);
    for (i = 0 ; i < n ; i++)
    {

       total = total + (*s - '0');

       s++;

    }
    
    printf("%d\n", total);
    

}