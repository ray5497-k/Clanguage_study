#include <stdio.h>

int main()
{
 int i , c = 0;

 char str[100]; //
 char *s = str;

 scanf("%s", str);

 for ( ; *s != '\0' ; s++)
 {
    c=c+1;
    
 }
printf("%d\n",c);
}