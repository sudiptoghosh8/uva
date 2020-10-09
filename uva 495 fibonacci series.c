#include <stdio.h>
int main()
{
    int n,i;
    long long unsigned F[5005];
    F[0] = 0;
    F[1] = 1;
    i=2;
    while(scanf("%d",&n)==1)
    
        while(i<=n)
        {
            F[i]=F[i-1]+F[i-2] ;
            i++;
        }

    printf("The Fibonacci number for %d is %llu\n",n,F[n]);

    return 0;
}
