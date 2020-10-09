#include<stdio.h>
int main()
{
    int t,i,h,w,l;
    while(scanf("%d",&t)==1)
for(i=1;i<=t;i++)
{
    scanf("%d%d%d",&h,&w,&l);
    if(h<=20&&l<=20&&w<=20)
    {
        printf("Case %d: good\n",i);
    }
    else
    {
        printf("Case %d: bad\n",i);
    }
}
return 0;
}
