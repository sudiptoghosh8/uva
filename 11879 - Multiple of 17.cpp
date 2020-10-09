#include<bits/stdc++.h>

using namespace std;



int main()
{
    string s;
    while(cin>>s)
    {
        if(s[0]=='0'&&s.size()==1)
        {
            break;
        }
        else{
                int n=0;
            for(int i=0;i<s.size();i++)
            {
                n=n*10+(s[i]-'0');
                n=n%17;
            }
            if(n==0)
            {
                cout<<"1"<<endl;
            }
            else{
                cout<<"0"<<endl;
            }
        }
    }
    return 0;
}
