#include <stdio.h>

int main()
{
    int i,j;
    char s[1000];

    scanf("%s", s);

    scanf("%d", &i);

    for(j = 0 ; j < i ; j ++)
    {
        if(j == i - 1)
        {
            printf("%c\n", s[j]);
        }
    }


}