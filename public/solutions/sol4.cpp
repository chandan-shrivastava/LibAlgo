#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        map<int, int> mp;
        for (int i = 1; i <= b; i++)
        {
            int x, y;
            cin >> x >> y;
            mp[x] = y;
        }
        cout << a - 1 << endl;
    }
    return 0;
}