#include<stdio.h>
int main()
{
int a,b,c,t,i;
scanf("%d",&t);
i=1;
while(i<=t)
{
scanf("%d%d%d",&a,&b,&c);

if((a>b&&a<c)||(a<b&&a>c))
{
    printf("Case %d: %d\n",i,a);
}
else if((b<a&&b>c)||(b>a&&b<c))
{
   printf("Case %d: %d\n",i,b);
}

else
{
    printf("Case %d: %d\n",i,c);
}
i++;
}
return 0;
}
