#include <stdio.h>
#include<string.h>


int main(){

    int t , i, j;
  

    scanf("%d",&t);
    char str[t][999];


    for(i = 0 ; i < t ; i ++)
    {
        scanf("%s", str[i]);

    }
    for(i = 0 ; i < t ; i++)
    {
        int j = strlen(str[i]);

        printf("%c%c\n", str[i][0], str[i][j-1]);
    }

}