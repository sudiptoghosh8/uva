#include<bits/stdc++.h>
using namespace std;
int main()
{

    int T;
    char c;
    scanf("%d%c",&T,&c);
    for(int t = 0; t < T; t++)
    {

        char s[200];
        gets(s);
        int len = strlen(s);
        int i,ans = 0;
        for(i = 0; i < len; i++)
        {
            if(s[i]=='a'||s[i]=='d'||s[i]=='g'||s[i]=='j'||s[i]=='m'||s[i]=='p'||s[i]=='t'||s[i]=='w'||s[i]==' ')
            {
                ans+=1;
            }
            else if(s[i]=='b'||s[i]=='e'||s[i]=='h'||s[i]=='k'||s[i]=='n'||s[i]=='q'||s[i]=='u'||s[i]=='x')
            {
                ans+=2;
            }
            else if(s[i]=='c'||s[i]=='f'||s[i]=='i'||s[i]=='l'||s[i]=='o'||s[i]=='r'||s[i]=='v'||s[i]=='y')
            {
                ans+=3;
            }
            else if(s[i]=='s'||s[i]=='z')
            {
                ans+=4;
            }
        }
        cout << "Case #" << t+1 << ": " << ans << endl;
    }
    return 0;
}
