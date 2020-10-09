#include<stdio.h>
#include<math.h>
int main()
{
long int test,n,i;
long long int result;
scanf("%ld",&test);
i=1;
while(i<=test)
{
scanf("%ld",&n);
/*Suppose n=3
then ,
result=(sqrt(1+4*2*3)-1)/2;
sqrt(25)-1/2;
5-1/2;
2*/

result=(sqrt(1+4*2*n)-1)/2;
printf("%lld\n",result);
i++;
}
return 0;
}
