#include <stdio.h>

int main()

{
 int h ,m ,t;

 scanf("%d %d", &h,&m);
 t = (((h * 60)+m) -45);
 
 if (h >= 0 && h <= 23 &&
     m >= 0 && m <= 59 )
     {
       
        if ( t > 0 )
        {
            t = t;
        }
        else if (t < 0)
        {
            t += 1440;
        }
            h = t/60;
            m = t%60;

            printf("%d %d\n",h,m);
        return 0;
        
     }

}