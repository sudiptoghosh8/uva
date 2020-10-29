#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){
long long int i,j,res=0;
long long int input,temp1;
long double temp=0;
while (1)
{
    cin>>input;
    if(input==0)break;
    temp=sqrt(input);
    temp1=temp;
    temp=temp-temp1;
    long int up, i;
    bool flag=false;
    if(temp==0){
      up=temp1*temp1;
      for(i=1;i<=temp1;i++){
          if(up==input){
              if(temp1%2==0) {cout<<temp1<<" "<<i<<endl;}
              else
              {
                  cout<<i<<" "<<temp1<<endl;
              }
           flag=true;
           break;
          }else
          {
              up--;
          }
          
      }
      if(flag==false){
        for(i=temp;i>=1;i--){
          if(up==input){
            if(temp1%2==0){cout<<i<<" "<<temp<<endl;}
            else
            {
                cout<<temp<<" "<<i<<endl;
            }
            
           
           break;
          }else
          {
              up--;
          }
      }
      }

    }
    else
    {
        temp1+=1;
        up=temp1*temp1;
       for(i=1;i<=temp1;i++){
          if(up==input){
              if(temp1%2==0){
                  cout<<temp1<<" "<<i<<endl;
              }else
              {
                   cout<<i<<" "<<temp1<<endl;
              }
           flag=true;
           break;
          }else
          {
              up--;
          }
          
      }
      if(flag==false){
        for(i=temp1-1;i>=1;i--){
          if(up==input){
             if(temp1%2==0){
           cout<<i<<" "<<temp1<<endl;}
           else
           {
                cout<<temp1<<" "<<i<<endl;
           }
           
           break;
          }else
          {
              up--;
          }
      }
        
    }
    
}
}
return 0;
}
