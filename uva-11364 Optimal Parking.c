#include<stdio.h>
int main()
{
    int max,min,i,t,n,d,s;
while(scanf("%d",&t)==1)
{scanf("%d",&n);
   max=0;
    min=50000;

for(i=0;i<n;i++)
      { d=0;
           scanf("%d",&s);
            if (max<s) max=s;
            if (min>s) min=s;
      }

   d=(max-min)*2;
printf("%d\n",d);
}
  return 0;
}
