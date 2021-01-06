#include<bits/stdc++.h>
using namespace std;
int ar[2000005];
int main()
{

    int n;
    while(scanf("%d",&n)==1 && n)
    {
        for(int i = 0; i < n; i++)
        {
            scanf("%d",&ar[i]);
        }
        sort(ar,ar+n);
        for(int i = 0; i < n; i++)
        {
            printf("%ld",ar[i]);
            if(i < n-1)printf(" ");
        }
        printf("\n");
    }
    return 0;
}
