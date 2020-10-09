#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    while(cin >> n)
        {
            if(n==0)break;

       long long int total = n;
        while((total/10) > 0)
            {
            long long int sum = 0;
            while(n>0)
            {
                sum=sum + (n%10);
                n = n/10;
            }
            total = sum;
            n = total;
        }
        cout << total << endl;
}
    return 0;
}
