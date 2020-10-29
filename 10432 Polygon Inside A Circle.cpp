#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;
int main()
{
    double r,n,s;
   while(scanf("%lf%lf",&r,&n)==2)
    {
        s=((r*r*n)/2)*sin(2*pi/n);
        printf("%.3lf\n",s);
    }

    return 0;

}
