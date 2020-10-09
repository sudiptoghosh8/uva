#include<bits/stdc++.h>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{
int i=1;
string s;
while(cin>>s)
{
if(s=="HELLO")
{
    cout<<"Case "<<i<<": "<<"ENGLISH"<<endl;
}
else if(s=="HOLA")
{
    cout<<"Case "<<i<<": "<<"SPANISH"<<endl;
}
else if(s=="HALLO")
{
    cout<<"Case "<<i<<": "<<"GERMAN"<<endl;
}
else if(s=="BONJOUR")
{
    cout<<"Case "<<i<<": "<<"FRENCH"<<endl;
}
else if(s=="CIAO")
{
    cout<<"Case "<<i<<": "<<"ITALIAN"<<endl;
}
else if(s=="ZDRAVSTVUJTE")
{
    cout<<"Case "<<i<<": "<<"RUSSIAN"<<endl;
}
else if(s=="#")
{
break;
}
else
{
cout<<"Case "<<i<<": "<<"";
cout<<"UNKNOWN"<<endl;
}

}i++;
getch();
}
