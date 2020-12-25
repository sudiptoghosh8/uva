#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int i,t,n,cnt;
    cin>>t;
    cnt=0;
    for(i=1;i<=t;i++)
    {

        for(n=1;n<=13;n++)
        {
            cin>>a[n];
            if(a[n]==0)
            {
                cnt++;

            }

        }
        if(cnt>0)
        {
            cout<<"Set #"<<i<<": No"<<endl;
        }
        else{
                cout<<"Set #"<<i<<": Yes"<<endl;
            }

            cnt=0;


}
return 0;

    }

