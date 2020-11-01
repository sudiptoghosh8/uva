#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int a,n,i,j;
string s;
while(getline(cin,s))
{
n=s.size();
a=-1;
for(i=0; i<n; i++)
{
    if(s[i]==' ')
    {
    for(j=i-1;j>a; j--)
    {
        cout<<s[j];
    }
    cout<<" ";
    a=i;
    }
}
   for(i=n-1;i>a;i--)
   {
       cout<<s[i];
   }
   cout<<endl;
}

return 0;
}
