#include <stdio.h>
#include <string.h>

int main()
{

    int i=0 , p = 1;
    char arr[100];
    int len;

    scanf("%s", arr);
    len = strlen(arr) -1;

  
   while (i < len)
   {
        if(arr[i] == arr[len])
        { i++;
          len --;
        }
        else 
        {
            p = 0;
            break;
        }
   }
   printf("%d\n",p);
   return 0;
   
}