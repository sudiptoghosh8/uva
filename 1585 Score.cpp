#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    char s[81];
    int n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",s);
        int score=0,k=1;
        for(int i=0; i<strlen(s); i++)
        {
            if(s[i]=='O')
            {
                score+=k;
                k++;
            }
            else
            {
                k=1;
            }
        }
        printf("%d\n",score);
    }


    return 0;
}
