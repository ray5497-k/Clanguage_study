#include <stdio.h>

int main()
{

int c = 0, i = 0 , t, j;
char str[1000000];

scanf("%[^\n]", str);

while (str[i] != '\0')
{
    if(str[i] != ' ' && (i == 0 || str[i-1]== ' '))
   
    {
        c++;
    }
 
    i++;
}
printf("%d\n", c);

}