#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int down = count(s.begin(), s.end(), 'D');
        int up = count(s.begin(), s.end(), 'U');
        int left = count(s.begin(), s.end(), 'L');
        int right = count(s.begin(), s.end(), 'R');
        int ans = 0;
        int val = abs(up - down);
        int num = abs(left - right);
        if (up != 0 && down != 0)
        {
            if (val % 2 == 1)
            {
                ans += val / 2 + 1;
            }
            else
            {
                ans += val / 2;
            }
        }
        else
        {
            val = abs(up - down);
            if (val % 2 == 1)
            {
                ans += val / 2 + 1;
            }
            else
            {
                ans += val / 2;
            }
        }
        if (left != 0 && right != 0)
        {
            if (num % 2 == 1)
            {
                ans += num / 2 + 1;
            }
            else
            {
                ans += num / 2;
            }
        }
        else
        {
            if (num % 2 == 1)
            {
                ans += num / 2 + 1;
            }
            else
            {
                ans += num / 2;
            }
        }
        cout << ans << endl;
    }
    return 0;
}