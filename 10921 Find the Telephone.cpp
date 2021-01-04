#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n[26]= {2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
    while(getline(cin,s))
    {
        for(int a=0; a<s.size(); a++)
        {
            if(s[a]>='A'&&s[a]<='Z')
            {
                cout<<n[(int)s[a]-65];
            }
            else
            {
                cout<<s[a];
            }
        }
        cout<<endl;
    }
    return 0;
}
