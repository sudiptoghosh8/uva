#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s[1000];
    int i, n, t;
    cin>>s;
    n=sizeof(s);
    for(i=0;i<n;i++)
    {
        cout<<s[i]<<endl;
    }

    return 0;
}