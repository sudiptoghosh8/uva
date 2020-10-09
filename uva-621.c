#include<stdio.h>
#include<string.h>

int main()
{
    int i,n,len;
    char s[10000];
    while(scanf("%d\n",&n)==1)
    {
    for(i=0;i<n;i++)
        {
        gets(s);
        len=strlen(s);
        if(s[len-1]=='5' && s[len-2]=='3')
        printf("-\n");
        else if(s[len-1]=='4' && s[0]=='9')
        printf("*\n");
        else if(s[0]=='1' && s[1]=='9' && s[2]=='0')
        printf("?\n");
        else
        printf("+\n");
        }
    }
return 0;
}
