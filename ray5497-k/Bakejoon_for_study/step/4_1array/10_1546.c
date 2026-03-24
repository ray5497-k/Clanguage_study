#include <stdio.h>
#include <math.h>
 
int main()
{
    int n ,i;
    double m,avg = 0, new_avg = 0 ,total = 0 ;
    double abs_error = 0  , rel_error = 0 ;
    
    scanf("%d", &n);
        double score[n];

    for(i = 0 ; i < n ; i ++)
    {
        scanf("%lf", &score[i]);

        total = total + score[i];
    }
        avg = total / n ;

        
        m = score[0];
    for(i = 0 ; i < n ; i ++)
    {
        if(m < score[i])
        {
            m = score[i];
        }
    }
    for(i= 0 ; i < n ; i++)
    {
        score[i] = score[i]/m * 100;
    }
    total = 0;
    for(i = 0 ; i < n ; i ++)
    {
        total = total + score[i];
    }
    new_avg = total / n;

    rel_error = fabs(new_avg - avg);
    abs_error = rel_error / avg ;


     printf("%lf\n", new_avg);
    
}