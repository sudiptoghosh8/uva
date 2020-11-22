
#include<iostream>
using namespace std;
 unsigned int carry_res(unsigned int n1,unsigned int  n2)
 {
     unsigned int  re1,re2,c,t;
     c=0;
     t=0;
     while(1)
     {
         re1=n1%10;
         re2=n2%10;

         n1=n1/10;
         n2=n2/10;

         if((re1+re2+c)>=10)
         {
             c=1;
             t++;
         }
         else{c=0;
         }

         if(n1==0&&n2==0)
         {
             break;
         }
     }
     return t;
 }

int main()
{
   unsigned int ip1, ip2, carry;
    while(1)
    {
        cin>>ip1>>ip2;
        if(ip1==0&&ip2==0)
        {
            break;
        }
        carry = carry_res(ip1, ip2);
        if(carry==0)
        {
            cout<<"No carry operation."<<endl;
        }
        else if(carry==1)
        {
            cout<<carry<<" carry operation."<<endl;
        }
        else{cout<<carry<<" carry operations."<<endl;

        }

    }
 return 0;
}
