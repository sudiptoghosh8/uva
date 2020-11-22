//unsolved big int problem

#include<bits/stdc++.h>
using namespace std;
int main()
{
   signed long long int sum=0, n,a;
    while(scanf("%lld %lld",&n,&a)==2)

    {
        for(int i=1; i<=n; i++)
        {
            sum=sum+(i*pow(a,i));
        }
        cout<<sum<<endl;
        sum=0;
    }

    return 0;
}

