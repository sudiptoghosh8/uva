//solve
#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int i,n,flag1,flag2,j;
    cin>>n;
    cout<<"Lumberjacks:"<<endl;

    for(i=1;i<=n;i++)
    {
        flag1=1;
        flag2=1;
        for(j=0;j<10;j++)
        {
            cin>>a[j];

        }
        for(j=0;j<9;j++)
        {
            if(a[j]<=a[j+1])
            {
                flag1=0;
            }
            if(a[j]>=a[j+1])
            {
                flag2=0;
            }
        }


        if(flag1!=flag2)
        {
            cout<<"Ordered"<<endl;
        }
        else{cout<<"Unordered"<<endl;}
    }

return 0;
}
