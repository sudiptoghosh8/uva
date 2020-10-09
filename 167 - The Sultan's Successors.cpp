#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>

typedef long long ll;

using namespace std;

int main()

   {

      int T,N;

      ll ans=0;

      cin>>T;

      for(int i=1;i<=T;i++)

      {
          cin>>N;

          ans=((N*(N+1))/2);
          ans=ans*ans;

          printf("Case %d: %lld\n",i,ans);

          ans=0;
      }

      return 0;
   }
