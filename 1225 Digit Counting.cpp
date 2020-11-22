#include<iostream>
using namespace std;
int main()
{
   long int t,i,n,m,mod,l,k,j;
  long int a[12];
    while(cin>>t)
    {
    for(i=1;i<=t;i++)
    {

        for(j=0;j<10;j++)
        {
             a[j]=0;

        } cin>>n;
             for(l=1;l<=n;l++)
             {
                 m=l;
                while(m!=0)
                {
                    mod=m%10;
                    m=m/10;
                    a[mod]+=1;
                }
             }

             for(k=0;k<10;k++)
            {
                if(k<9)
                   {
                       cout<<a[k]<<" ";
                   }
                else
                     cout<<a[k]<<endl;
            }
    }

    }


    return 0;
}
