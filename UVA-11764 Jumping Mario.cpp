
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],i,j,t,n,k,h,l;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        h=0;
        l=0;
        cin>>n;
        for(j=1; j<=n; j++)
        {
            cin>>a[j];

        }
        for(j=1; j<=n-1; j++)
        {
            if(a[j]<a[j+1])
            {
                h++;
            }
            else if(a[j]>a[j+1])
            {
                l++;
            }
        }
        printf("Case %d: %d %d\n",i,h,l);

    }
    return 0;
}
