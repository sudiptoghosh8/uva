#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    int b,n,d,c,v,reserve[25],debit[25],credit[25];
    while (scanf("%d%d",&b,&n)==2)
    {
        if (!b && !n) return 0;
        memset(reserve,0,sizeof(reserve));
        memset(debit,0,sizeof(debit));
        memset(credit,0,sizeof(credit));
        for (int i=1;i<=b;i++) scanf("%d",&reserve[i]);
        for (int i=0;i<n;i++)
        {
            scanf("%d%d%d",&d,&c,&v);
            debit[d]+=v;
            credit[c]+=v;
        }
        int flag=1;
        for (int i=1;i<=b;i++)
        {
            if (credit[i]+reserve[i]-debit[i]<0)
            {
                flag=0;
                break;
            }
        }
        if (flag) printf("S\n");
        else printf("N\n");
    }
    return 0;
}