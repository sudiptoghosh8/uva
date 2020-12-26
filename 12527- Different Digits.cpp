#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a[10];
    long long n, m, j, i, t, c;

    while (scanf("%lld %lld", &n, &m) != EOF)
    {
        c = 0;
        for (i=n; i <= m; i++)
        {
            for (j=0; j<=9; j++)
                a[j] = 0;
            t = i;
            while (t!=0)
            {
                if (a[t%10] == 1)
                    break;
                a[t%10] = 1;
                t /= 10;
            }
            if (t == 0)
                c++;
        }

        printf("%lld\n", c);
    }
    return 0;
}
