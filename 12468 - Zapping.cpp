#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,s,k;


        while(cin>>s>>k)
        {
        if(s<0&&k<0)
        {
            break;
        }
        j=abs(s-k);
        if(j>=50 )
        {
            j=100-j;
        }
          cout<<j<<endl;


        }


return 0;
}
