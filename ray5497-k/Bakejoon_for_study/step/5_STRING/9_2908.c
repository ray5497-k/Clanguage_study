#include <stdio.h>
#include <string.h>

int main()
{
    int i ;
    char *big;
    typedef struct {
        char str[1000];
    } number;

    number s[2];

    for(i = 0 ; i < 2 ; i++)
    {
        scanf("%s", s[i].str);
            
        char temp;
            
            temp = s[i].str[0];
            s[i].str[0] = s[i].str[2];
            s[i].str[2] = temp; 
    }
while (1)
{
    
    big = s[0].str;
    if(s[0].str[0] < s[1].str[0])
    {
        big = s[1].str;
        break;
    }
    else if((s[0].str[0] == s[1].str[0]) && (s[0].str[1] < s[1].str[1]))
    {
        big = s[1].str;
        break;
    }
    else if((s[0].str[0] == s[1].str[0]) && (s[0].str[1] == s[1].str[1])
             &&(s[0].str[2] < s[1].str[2]))
    {
                big = s[1].str;
        break;
    } 
    else
    {
        break;
    }      
}

printf("%s\n",big);

return 0;
}
