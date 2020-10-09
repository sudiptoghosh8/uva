#include<stdio.h>
int main()
{
int T;
long int N,K,P,RES,i;
scanf("%d",&T);
i=1;
while(i<=T)
{
scanf("%ld%ld%ld",&N,&K,&P);
RES=K+P;
if(RES>N)
{
RES = RES-N;
}
printf("Case %ld: %ld\n",i,RES);

i++;
}

return 0;
}
