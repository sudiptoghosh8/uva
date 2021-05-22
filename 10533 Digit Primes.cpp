#include<bits/stdc++.h>
using namespace std;
const int maxn = 1000000+5;
bool ok[maxn];
int pre[maxn];

int main()
{
    int dig, num;
    ok[0] = 0, ok[1] = 1;
    for( int i = 2; i <= 1000000; i++ )
    {
        if( !ok[i] )
        {
            dig = i, num = 0;
            while(dig)
            {
                num += dig % 10;
                dig /= 10;
            }
            if( !ok[num] )
            {
                pre[i] = 1;
            }
            for(int j = 2*i; j <= 1000000; j += i)
                ok[j] = 1;
        }
    }
    for(int i = 1; i <= 1000000; i++)
        pre[i] += pre[i-1];
    int n, a, b;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        if( a > b ) swap(a, b);
        printf("%d\n", pre[b]-pre[a-1]);
    }
    return 0;
}
