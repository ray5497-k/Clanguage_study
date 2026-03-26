#include <stdio.h>
#include <string.h>

int main()
{
    int i , total = 0;
    char num[16];
    scanf("%s", num);

    for(i = 0 ; num[i] != '\0' ; i++)
    {
        num[i] = num[i] - 'A' ;
        if(0 <= num[i] && num[i] <=2)
                {
                    total += 3 ;
                }
        else if(3<= num[i] && num[i] <=5)
                {
                    total += 4;
                }
        else if(6 <= num[i] && num[i] <=8)
                {
                    total += 5;
                  
                }
        else if(9 <= num[i] && num[i] <= 11) 
                {
                    total += 6;
                    
                }
        else if(12 <= num[i] && num[i] <=14)
                {
                    total += 7;
                }
        else if(15 <= num[i] && num[i] <=18)
                {
                    total += 8;
                }
        else if(19 <= num[i] && num[i] <=21)
                {
                    total += 9;
                }
        else if(22 <= num[i] && num[i] <=25)
                {
                    total += 10;
                }  
    }
   printf("%d\n",total);
   return 0;

}