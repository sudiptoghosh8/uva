#include<stdio.h>
#include<math.h>
int main()
{
int t;
long int i,a,b,c;
scanf("%d",&t);
i=1;
while(i<=t)
{
scanf("%ld%ld",&a,&b);
c=(a/3)*(b/3);
i++;
printf("%ld\n",c);
}

return 0;
}
