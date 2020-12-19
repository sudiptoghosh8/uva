#include<bits/stdc++.h>
using namespace std;
int main(){
    double n,sum,t1,t2,total, count, ans;
    double a[100000];
    int i;
    cin>>t1;
    while(t1--)
    {
        sum=0;
        cin>>t2;
        for(i=0;i<t2;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        total=sum/t2;
        count=0;
        for(int j=0;j<t2;j++)
        {
            if(total<a[j])
            {
                count++;
            }
        ans=100*count/t2;
        }
        printf("%0.3lf%\n",ans);
    }
    
    return 0;
}
/*
5
5 50 50 70 80 100
7 100 95 90 80 70 60 50
3 70 90 80
3 70 90 81
9 100 99 98 97 96 95 94 93 91

40.000%
57.143%
33.333%
66.667%
55.556%


*/