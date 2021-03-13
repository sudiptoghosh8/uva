
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,b,sum,temp,j,m,k;
    scanf("%d",&m);
    for(k=1;k<=m;k++){
            scanf("%d",&n);
        int ara[n];
        sum=0;
        for(i=0;i<n;i++){
            scanf("%d",&ara[i]);
        }
        for(i=0;i<n;i++){
            for(j=0;j<n-1;j++){
                if(ara[j]>ara[j+1]){
                    temp=ara[j];
                    ara[j]=ara[j+1];
                    ara[j+1]=temp;
                    sum=sum+1;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",sum);
    }
return 0;
}
