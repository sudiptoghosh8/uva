#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
 
   int t;
   cin>>t;
   getchar();
   while (t--)
   {
       int i=0;
       stack<char>s;
       string ch;
       getline(cin,ch);
       while (i<ch.size())
       {
           if(ch[i]=='('||ch[i]=='['){ 
               s.push(ch[i]);//opening tag
           }else if(ch[i]==')')
           {
               if(s.empty()||s.top()!='('){
                   s.push('x');
                   break;
               }
                s.pop();  
           }else if(ch[i]==']')
            {
                if(s.empty()||s.top()!='['){
                     s.push('x');
                    break;
                }
                   s.pop();
 
            }
            i++;
 
       }
 
       if(s.empty())
       {
            cout<<"Yes"<<endl;
       }else
       {
           cout<<"No"<<endl;
       }
 
   }
 
 
    return 0;
}