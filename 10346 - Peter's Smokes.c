#include<stdio.h>
int main()
{
    int n,k,i,sum=0;
   while(scanf("%d%d",&n,&k)!=EOF)
    while(n>=k)
    {
        for(i=1;i<+n;i++){
    n=n-k+1;

   sum=sum+k+n;


    }

    printf("%d\n",sum);
    }
    return 0;
    }
