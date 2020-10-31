#include<stdio.h>
int main()
{
    long int n,b,h,w,price,cost,p,i,j,a;
    while (scanf("%ld%ld%ld%ld",&n,&b,&h,&w)==4)
    {
        cost=9999999;
        while (h--)
        {
            scanf("%ld",&price);
            for(j=0; j<w; j++)
            {
                scanf("%ld",&a);
                p=0;
                if(a>=n)
                {
                    p=price*n;
                    if(cost>p) cost=p;
            }
        }
    }
    if(cost>b) printf("stay home\n");
    else printf("%ld\n",cost);
    }
    return 0;
}