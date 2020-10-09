#include<iostream>
using namespace std;
int main()
{
    int t,block,a[1000011];
    int arra1,arra2;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        if(k>0)
            cout<<endl;

        cin>>block;
        for(int i=0;i<block;i++)
        {
            cin>>arra1>>arra2;

            a[i]= arra1+arra2;
        }
        for(int i=block-1;i>0;i--)
        {
          if(a[i]>=10)
            {
             a[i-1]+=a[i]/10;
            a[i]%=10;
          }

        }
        for(int i=0;i<block;i++)
        {
            cout<<a[i];
        }
        cout<<"\n";
}
}
