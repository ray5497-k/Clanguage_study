#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char total[10000];

    while ((fgets(str, sizeof(str), stdin)))
    {
        strcat(total,str);
    }
    
    printf("%s", total);
    return 0;
}