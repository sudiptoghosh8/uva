 #include<stdio.h>
int main()
{

    long int max,n,a,i,j,b;
    scanf("%ld",&a);
    for(i=1; i<=a; i++)
    {
        max=0;
        scanf("%ld",&n);
        for(j=1; j<=n; j++)
        {
            scanf("%ld",&b);
            if(b>max)
                max=b;
        }

        printf("Case %ld: %ld\n",i,max);
    }
    return 0;
}
