#include<iostream>
using namespace std;
int main()
{
 int n,i,a[5];
 int ans=0;

 while(cin>>n)
 {
  for(i=0; i<5; i++)
  {
   cin>>a[i];
   if(a[i]==n)
    ans=ans+1;
  }
  cout<<ans<<endl;
  ans=0;
 }

 return 0;
}
