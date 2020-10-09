#include<stdio.h>
int main()
{
long long int n,k,sum;
while(scanf("%lld%lld",&n,&k)!=EOF)
{ sum=0;
while(n>=k)
{

n=n-k;
sum=sum+k;
n=n+1;
}
sum=sum+n;
printf("%lld\n",sum);
}
return 0;
}
