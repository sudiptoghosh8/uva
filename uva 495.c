#include <stdio.h>
int main()
{
    int F[5001], i, n;
    F[0] = 0;
    F[1] = 1;
    scanf("%d",&n);
    for(i=2; i<=n; i++)
    {
        F[i]=F[i-1]+F[i-2] ;
    }

    printf("The Fibonacci number for %d is %d",n,F[n]);

    return 0;
}
