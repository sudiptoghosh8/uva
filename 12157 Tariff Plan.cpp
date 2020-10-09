#include<stdio.h>
int main()
{

   long int n ,m,arr[10000],t,mili,jucy,cou,i;
    scanf("%ld",&t);
    cou=0;
    while(t--)
    {
        cou++;
       mili =0;
       jucy =0;
      scanf("%ld",&n);
      for(i=1;i<=n;i++)
      {
          scanf("%ld",&arr[i]);

          mili +=(arr[i]+30)/30;
          jucy +=(arr[i]+60)/60;
      }

      mili *=10;
      jucy *=15;

      if(mili<jucy)
      {
          printf("Case %ld: Mile %ld\n",cou,mili);
      }
      else if(jucy == mili)
      {
         printf("Case %ld: Mile Juice %ld\n",cou,jucy);
      }
      else if(jucy<mili)
      {
          printf("Case %ld: Juice %ld\n",cou,jucy);
      }

    }

}
