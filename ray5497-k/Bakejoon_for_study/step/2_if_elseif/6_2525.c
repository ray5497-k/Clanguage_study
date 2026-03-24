#include <stdio.h>

int main()

{
 int h ,m ,t,c;

 scanf("%d %d %d", &h,&m,&c);

 
 if (h >= 0 && h <= 23 &&
     m >= 0 && m <= 59 &&
     c >= 0 && c <= 1000 )
     {
       t = (((h * 60)+m) + c);
        
       if (t < 0)
        {
            t += 1440;
        }
        else if(t >= 1440)
        {
            t = t -1440;
        }
            h = t/60;
            m = t%60;
       
            printf("%d %d\n",h,m);
        return 0;
        
     }

}