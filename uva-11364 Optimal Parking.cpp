#include<iostream>
using namespace std;
int main()
{
    int max,min,i,t,n,d,s;
scanf("%d",&t);
 scanf("%d",&n);
   max=0;
    min=50000;
for(i=0;i>n;i++)
      {
           scanf("%d",&s);
            if (max<s) max=s;
            if (min>s) min=s;
      }

   d=(max-min)*2;
 printf("%d\n",d);

  return 0;
}
