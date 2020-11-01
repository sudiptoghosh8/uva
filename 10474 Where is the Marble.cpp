#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int numbers[10005];
int main()
{
    int T = 1;
    int N1, N2;
cin >> N1 >> N2;
    while (N1|| N2)
    {
        for (int i = 0; i < N1; ++i)
            cin >> numbers[i];
        sort(numbers, numbers + N1);
        cout << "CASE# " << T++ << ":\n";
        while (N2--)
        {
            int n;
            cin >> n;
            auto lb = lower_bound(numbers, numbers + N1, n);
            if (lb == numbers + N1 || *lb != n)
                cout << n << " not found\n";
            else
                cout << n << " found at " << (lb - numbers) + 1 << '\n';
        }
    }
}
