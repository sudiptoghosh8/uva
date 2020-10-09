#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name[110],song[5000];
    song[5000] ={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
       cin >> name[i];
    }
    int j = 0,k = 0,m = 1;
    if(n > 16)
    m = ceil(n/16)+1;
    for(int i = 0; i < m*16; i++,j++,k++)
    {
        if(k == 16)k = 0;
        if(j == n)j = 0;
        cout << name[j] << ": " << song[k] << endl;
    }
    return 0;
}
