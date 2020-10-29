#include <iostream>
#include<algorithm>
using namespace std;
int book[10000];
int main()
{
    int a, b;
    while (cin >> a)
    {
        for (int i = 0; i < a; ++i)
            cin >> book[i];
        sort(book, book + a);
        cin >> b;
        int i = 0, j = a - 1;
        int bI, bJ;
        while (i < j)
        {
            if (book[i] + book[j] < b)
                ++i;
            else if (book[i] + book[j] == b)
            {
                bI = i;
                bJ = j;
               ++i;
                --j;
            }
            else
                --j;
        }
        cout << "Peter should buy books whose prices are " << book[bI] << " and " << book[bJ] << ".\n\n";
    }
    return 0;
}
