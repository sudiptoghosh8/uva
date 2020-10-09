#include<stdio.h>

int main()
{
    double  x, y, z, t, T, i, a,h;
    double x1, y1 ;
    scanf("%lf", &T);
    for(i=0; i<T; i++)
    {
        scanf("%lf%lf%lf",&x,&y,&z);

        x1 = x*60 ;
        y1 = y*60 ;
        h= (x1+y1)/3;
        {
            t = z/(x1+y1);

            a = (x1*t + (x1-y1)*t) ;
        }
        printf(" %.0lf ",a);
    }
    return 0;

}
