#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,flag;
    int ara1[3010];
    int ara2[3010];
    while(scanf("%d",&n)==1)
    {
            for(i=0;i<n;i++)
            {
                scanf("%d",&ara1[i]);
                ara2[i]=0;
            }
           
            for(i=0;i<n-1;i++)
            {
                ara2[abs(ara1[i]-ara1[i+1])]=1;
               
            }
            flag=1;
            for(i=1;i<n;i++)
            {
                if(!ara2[i])
                {
                    flag=0;
                    break;
                }
            }
            if(flag)
            {
                printf("Jolly\n");
            }else
            {
            printf("Not jolly\n");
            }
    }
    return 0;
}