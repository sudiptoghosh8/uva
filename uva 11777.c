
#include<stdio.h>
int main()
{
    int team1,team2,final,P,ct1,ct2,ct3,c,d,n,i;
    while(scanf("%d",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
           scanf("%d%d%d%d%d%d%d",&team1,&team2,&final,&P,&ct1,&ct2,&ct3);
        if(ct1<=ct2 && ct1<=ct3)
           c=(ct2+ct3)/2;
        else if(ct2<=ct1 && ct2<=ct3)
           c=(ct1+ct3)/2;
        else if(ct3<=ct1 && ct3<=ct2)
             c=(ct1+ct2)/2;
        d=team1+team2+final+P+c;
        if(d>=90)
        printf("Case %d: A\n",i);
        else if(d>=80)
        printf("Case %d: B\n",i);
        else if(d>=70)
        printf("Case %d: C\n",i);
        else if(d>=60)
        printf("Case %d: D\n",i);
        else if(d<60)
        printf("Case %d: F\n",i);

        }
    }

    return 0;
}
