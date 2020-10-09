#include<iostream>
using namespace std;
int main()
{
    long long int ip1,ip2,max,b,s,i,x,y,p;
while(1)
        {
            cin>>ip1>>ip2;
            if (ip1==0 && ip2==0)
                break;
            b=ip2;
            s=ip1;
            if (ip2<ip1)
            {
                s=ip2;
                b=ip1;
            }
            p=1;
            max=0;
            for (i=s; i<=b; i++)
            {
                x=0;
                y=i;
                if (i>0)
                while (1)
                    {
                        x++;
                        if (y % 2==0)
                            y=y/2;
                        else
                            y=3*y+1;
                        if(y==1)
                          break;
                    }
                if (x>max)
                {
                    p=i;
                    max=x;
                }
            }
            cout<<"Between "<<ip1<<" and "<<ip2<<", "<<p<<" generates the longest sequence of "<<max<<" values."<<endl;
        }
    return 0;
}
